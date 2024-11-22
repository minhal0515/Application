import sqlite3
import pandas as pd
conn = sqlite3.connect("Example.db")
cur = conn.cursor()

cur.execute('CREATE TABLE STUDENTS(STUDENT_FIRST_NAME CHAR(20), STUDENT_LAST_NAME CHAR(20), STUD_ID INTEGER, EMAIL CHAR(20), BRANCH CHAR(20))')
conn.execute('CREATE TABLE COURSES(COURSE_NAME CHAR(20),COURSE_ID INTEGER, DEPTT_ID INTEGER, CREDITS INTEGER, INSTRUCTOR ID INTEGER)')
conn.execute('CREATE TABLE INSTRUCTOR(FIRST_NAME CHAR(20), LAST_NAME CHAR(20), INSTR_ID INTEGER, EMAIL CHAR(20),DEPT INTEGER)')
conn.execute('CREATE TABLE DEPARTMENTS(DEPT_NAME CHAR(20), BUILDING CHAR(20), BUDGET INTEGER, DEPT_ID INTEGER,CHAIR_ID INTEGER)')
conn.execute('CREATE TABLE ENROLLMENTS(ENROLLMENT_ID INTEGER, STUDENT_ID INTEGER, COURSE_ID INTEGER, SEMESTER CHAR(20),GRADE CHAR(2))')

s1 = ("John", "Doe", 1, "john@gmail.com", "cse")
s2 = ("Steve", "Rogers", 2, "steve@gmail.com", "cse")
s3 = ("Kendrick", "Lamar", 3, "ken@pop.com", "ece")
s4 = ("Ryan", "Gosling", 4, "ryan@yahoo,com", "eee")
s5 = ("Dave", "Chappelle", 5, "dave@dave.com", "cse")

c1 = ("PAP", 1, 1, 3, 1)
c2 = ("Radiant", 2, 4, 2, 2)
c3 = ("Reflection", 3, 3, 4, 3)
c4 = ("Bio", 4, 4, 5, 4)
c5 = ("OOP with c++", 5, 3, 2, 4)

i1 = ("Siddharth", "Pai", 1, "sid@gmail.com", 1)
i2 = ("Charlie", "Wilson", 2, "charlie@g.com", 2)
i3 = ("Cash", "XO", 3, "xo@gmail.com", 3)
i4 = ("Abel", "Tesfaye", 4, "abel@gmail.com", 4)
i5 = ("Shawn", "Cee", 5, "shawn@gmail.com", 5)

d1 = ("CSE", "A", 100000, 1, 1)
d2 = ("ECE", "B", 200000, 2, 2)
d3 = ("EEE", "C", 300000, 3, 3)
d4 = ("MECH", "D", 400000, 4, 4)
d5 = ("CIVIL", "E", 500000, 5, 5)

e1 = (1, 1, 1, "Fall", "A")
e2 = (2, 2, 2, "Spring", "B")
e3 = (3, 3, 3, "Summer", "C")
e4 = (4, 4, 4, "Fall", "D")
e5 = (5, 5, 5, "Spring", "E")

cur.execute('insert into STUDENTS(STUDENT_FIRST_NAME, STUDENT_LAST_NAME, STUD_ID, EMAIL, BRANCH) values(?,?,?,?,?)', s1)
cur.execute('insert into STUDENTS(STUDENT_FIRST_NAME, STUDENT_LAST_NAME, STUD_ID, EMAIL, BRANCH) values(?,?,?,?,?)', s2)
cur.execute('insert into STUDENTS(STUDENT_FIRST_NAME, STUDENT_LAST_NAME, STUD_ID, EMAIL, BRANCH) values(?,?,?,?,?)', s3)
cur.execute('insert into STUDENTS(STUDENT_FIRST_NAME, STUDENT_LAST_NAME, STUD_ID, EMAIL, BRANCH) values(?,?,?,?,?)', s4)
cur.execute('insert into STUDENTS(STUDENT_FIRST_NAME, STUDENT_LAST_NAME, STUD_ID, EMAIL, BRANCH) values(?,?,?,?,?)', s5)

cur.execute('insert into COURSES(COURSE_NAME,COURSE_ID, DEPT_ID, CREDITS, INSTRUCTOR ID) values(?,?,?,?,?)', c1)
cur.execute('insert into COURSES(COURSE_NAME,COURSE_ID, DEPT_ID, CREDITS, INSTRUCTOR ID) values(?,?,?,?,?)', c2)
cur.execute('insert into COURSES(COURSE_NAME,COURSE_ID, DEPT_ID, CREDITS, INSTRUCTOR ID) values(?,?,?,?,?)', c3)
cur.execute('insert into COURSES(COURSE_NAME,COURSE_ID, DEPT_ID, CREDITS, INSTRUCTOR ID) values(?,?,?,?,?)', c4)
cur.execute('insert into COURSES(COURSE_NAME,COURSE_ID, DEPT_ID, CREDITS, INSTRUCTOR ID) values(?,?,?,?,?)', c5)

cur.execute('insert into INSTRUCTOR(FIRST_NAME, LAST_NAME, INSTR_ID, EMAIL,DEPT) values(?,?,?,?,?)', i1)
cur.execute('insert into INSTRUCTOR(FIRST_NAME, LAST_NAME, INSTR_ID, EMAIL,DEPT) values(?,?,?,?,?)', i2)
cur.execute('insert into INSTRUCTOR(FIRST_NAME, LAST_NAME, INSTR_ID, EMAIL,DEPT) values(?,?,?,?,?)', i3)
cur.execute('insert into INSTRUCTOR(FIRST_NAME, LAST_NAME, INSTR_ID, EMAIL,DEPT) values(?,?,?,?,?)', i4)
cur.execute('insert into INSTRUCTOR(FIRST_NAME, LAST_NAME, INSTR_ID, EMAIL,DEPT) values(?,?,?,?,?)', i5)

cur.execute('insert into DEPARTMENTS(DEPT_NAME, BUILDING, BUDGET, DEPT_ID,CHAIR_ID) values(?,?,?,?,?)', d1)
cur.execute('insert into DEPARTMENTS(DEPT_NAME, BUILDING, BUDGET, DEPT_ID,CHAIR_ID) values(?,?,?,?,?)', d2)
cur.execute('insert into DEPARTMENTS(DEPT_NAME, BUILDING, BUDGET, DEPT_ID,CHAIR_ID) values(?,?,?,?,?)', d3)
cur.execute('insert into DEPARTMENTS(DEPT_NAME, BUILDING, BUDGET, DEPT_ID,CHAIR_ID) values(?,?,?,?,?)', d4)
cur.execute('insert into DEPARTMENTS(DEPT_NAME, BUILDING, BUDGET, DEPT_ID,CHAIR_ID) values(?,?,?,?,?)', d5)

cur.execute('insert into ENROLLMENTS(ENROLLMENT_ID, STUDENT_ID, COURSE_ID, SEMESTER,GRADE) values(?,?,?,?,?)', e1)
cur.execute('insert into ENROLLMENTS(ENROLLMENT_ID, STUDENT_ID, COURSE_ID, SEMESTER,GRADE) values(?,?,?,?,?)', e2)
cur.execute('insert into ENROLLMENTS(ENROLLMENT_ID, STUDENT_ID, COURSE_ID, SEMESTER,GRADE) values(?,?,?,?,?)', e3)
cur.execute('insert into ENROLLMENTS(ENROLLMENT_ID, STUDENT_ID, COURSE_ID, SEMESTER,GRADE) values(?,?,?,?,?)', e4)
cur.execute('insert into ENROLLMENTS(ENROLLMENT_ID, STUDENT_ID, COURSE_ID, SEMESTER,GRADE) values(?,?,?,?,?)', e5)

x = cur.execute('select *from STUDENT')
for i in x:
    print(i)

y = cur.execute('select *from COURSES')    
for i in y:
    print(i)

z = cur.execute('select *from INSTRUCTOR')    
for i in z:
    print(i)

a = cur.execute('select *from DEPARTMENTS')    
for i in a:
    print(i)

b = cur.execute('select *from ENROLLMENTS')    
for i in b:
    print(i)
    
print("Done")  

def display_table(table_name):
  query=f'SELECT*FROM {table_name}'
  df=pd.read_sql_query(query,conn)
  print(f'Content of {table_name} table:')
  print(df)
  print('\n')

display_table('Student')
display_table('Courses')
display_table('Instructor')
display_table('Departments')
display_table('Enrollments')

conn.close()