import sqlite3


conn = sqlite3.connect('recruitment_system.db')
cursor = conn.cursor()

cursor.execute('''CREATE TABLE IF NOT EXISTS candidates (
                    id INTEGER PRIMARY KEY,
                    name TEXT NOT NULL,
                    email TEXT NOT NULL UNIQUE,
                    phone TEXT
                  )''')

cursor.execute('''CREATE TABLE IF NOT EXISTS jobs (
                    id INTEGER PRIMARY KEY,
                    title TEXT NOT NULL,
                    description TEXT
                  )''')

conn.commit()

def add_candidate(name, email, phone):
    cursor.execute("INSERT INTO candidates (name, email, phone) VALUES (?, ?, ?)", (name, email, phone))
    conn.commit()

def post_job(title, description):
    cursor.execute("INSERT INTO jobs (title, description) VALUES (?, ?)", (title, description))
    conn.commit()

def view_candidate(email):
    cursor.execute("SELECT * FROM candidates WHERE email=?", (email,))
    candidate = cursor.fetchone()
    if candidate:
        print("Candidate Details:")
        print("Name:", candidate[1])
        print("Email:", candidate[2])
        print("Phone:", candidate[3])
    else:
        print("Candidate not found.")

def main():
    while True:
        print("\nRecruitment Management System")
        print("1. Add Candidate")
        print("2. Post Job")
        print("3. View Candidate Details")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter candidate name: ")
            email = input("Enter candidate email: ")
            phone = input("Enter candidate phone: ")
            add_candidate(name, email, phone)
            print("Candidate added successfully.")
        elif choice == '2':
            title = input("Enter job title: ")
            description = input("Enter job description: ")
            post_job(title, description)
            print("Job posted successfully.")
        elif choice == '3':
            email = input("Enter candidate email: ")
            view_candidate(email)
        elif choice == '4':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()

conn.close()