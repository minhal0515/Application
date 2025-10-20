from flask import Flask, render_template, request, redirect, url_for
from models import db, Scan  # Importing the database and model
import utils  # Importing utility functions for scanning

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///scans.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
db.init_app(app)

@app.route('/')
def home():
    scans = Scan.query.all()  # Retrieve all scan records from the database
    return render_template('upload.html', scans=scans)

@app.route('/upload', methods=['POST'])
def upload_file():
    if request.method == 'POST':
        file = request.files['file']
        file_name = file.filename
        file_content = file.read().decode('utf-8')  # Reading file content
        sensitive_data = utils.scan_file_for_sensitive_data(file_content)  # Scan for sensitive data
        
        # Save scan result to the database
        new_scan = Scan(filename=file_name, sensitive_info=sensitive_data)
        db.session.add(new_scan)
        db.session.commit()

        return redirect(url_for('home'))

@app.route('/delete/<int:scan_id>', methods=['GET'])
def delete_scan(scan_id):
    scan_to_delete = Scan.query.get(scan_id)
    db.session.delete(scan_to_delete)
    db.session.commit()

    return redirect(url_for('home'))

if __name__ == '__main__':
    app.run(debug=True)
