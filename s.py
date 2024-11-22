import sqlite3
conn = sqlite3.connect("uni1.db")
cur = conn.cursor()

cur.execute('CREATE TABLE STUDENT(SRN INTEGER, NAME CHAR(20), SEM INTEGER)')
conn.execute('CREATE TABLE STAFF(EID INTEGER, NAME CHAR(20), DEPT CHAR(5))')
