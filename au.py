import sqlite3
conn = sqlite3.connect('student.db')
cursor = conn.cursor()
cursor.execute("SELECT stud_name, dept, roll, Section FROM student")
rows = cursor.fetchall()
data_map = {row[0]: {"Department": row[1], "Roll Number": row[2], "Section" : row[3]} for row in rows}
print(data_map)
conn.close()