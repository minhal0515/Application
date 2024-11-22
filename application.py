from flask import Flask, request, jsonify, render_template
from flask_sqlalchemy import SQLAlchemy
from datetime import datetime
import os
import re

app = Flask(__name__)

# Configuration
app.config['UPLOAD_FOLDER'] = './uploads'
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///scans.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db = SQLAlchemy(app)

# Ensure the uploads folder exists
if not os.path.exists(app.config['UPLOAD_FOLDER']):
    os.makedirs(app.config['UPLOAD_FOLDER'])


# Database Model
class Scan(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    filename = db.Column(db.String(100), nullable=False)
    scan_results = db.Column(db.Text, nullable=False)
    timestamp = db.Column(db.DateTime, default=datetime.utcnow)


# Create the database tables
with app.app_context():
    db.create_all()

# Routes
@app.route('/')
def home():
    return render_template('upload.html')


@app.route('/upload', methods=['POST'])
def upload_file():
    file = request.files['file']
    if file:
        file_path = os.path.join(app.config['UPLOAD_FOLDER'], file.filename)
        file.save(file_path)

        # Scan the file
        scan_results = scan_file(file_path)

        MAX_FILE_SIZE = 10 * 1024 * 1024  # 10MB
        if file and len(file.read()) > MAX_FILE_SIZE:
            return jsonify({"error": "File size exceeds the maximum limit of 10MB!"}), 400


        # Save scan results in the database
        scan = Scan(filename=file.filename, scan_results=str(scan_results))
        db.session.add(scan)
        db.session.commit()

        return jsonify({"message": "File uploaded and scanned!", "results": scan_results})

    return jsonify({"error": "No file uploaded!"}), 400


@app.route('/results', methods=['GET'])
def get_results():
    # Query parameters for filtering and pagination
    filename = request.args.get('filename')
    page = request.args.get('page', 1, type=int)
    per_page = request.args.get('per_page', 10, type=int)

    # Query the database
    query = Scan.query
    if filename:
        query = query.filter(Scan.filename.ilike(f"%{filename}%"))
    paginated_results = query.order_by(Scan.timestamp.desc()).paginate(page=page, per_page=per_page)

    scans = [
        {
            "id": scan.id,
            "filename": scan.filename,
            "scan_results": scan.scan_results,
            "timestamp": scan.timestamp.strftime('%Y-%m-%d %H:%M:%S')
        }
        for scan in paginated_results.items
    ]

    return render_template(
        'results.html',
        scans=scans,
        current_page=paginated_results.page,
        total_pages=paginated_results.pages
    )


@app.route('/docs')
def docs():
    return '''
    <h1>API Documentation</h1>
    <ul>
        <li><strong>Upload File:</strong> POST /upload (form-data: file)</li>
        <li><strong>Retrieve Results:</strong> GET /results</li>
        <ul>
            <li><code>filename</code>: Filter results by filename (e.g., ?filename=test)</li>
            <li><code>page</code>: Specify page number for pagination (e.g., ?page=2)</li>
            <li><code>per_page</code>: Specify results per page (e.g., ?per_page=5)</li>
        </ul>
    </ul>
    '''


def scan_file(file_path):
    # Patterns for sensitive data
    patterns = {
        "PAN": r"[A-Z]{5}[0-9]{4}[A-Z]",
        "SSN": r"\d{3}-\d{2}-\d{4}",
        "Credit Card": r"\d{4}-?\d{4}-?\d{4}-?\d{4}"
    }

    results = {}
    with open(file_path, 'r') as file:
        content = file.read()
        for label, pattern in patterns.items():
            matches = re.findall(pattern, content)
            if matches:
                results[label] = matches
    return results


if __name__ == '__main__':
    app.run(debug=True)
