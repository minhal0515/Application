import sqlite3
import pandas as pd
conn = sqlite3.connect("Example.db")
cur = conn.cursor()

cur.execute('CREATE TABLE CHEF(CHEF_NAME CHAR(20),CHEF_ID INTEGER, SPECIALITY CHAR(20))')
conn.execute('CREATE TABLE CUSTOMER(CUSTOMER_NAME CHAR(20),CUSTOMER_ID INTEGER, CONTACT_ID INTEGER)')
conn.execute('CREATE TABLE FOOD_ITEM(ITEM_ID INTEGER,ITEM_NAME CHAR(20),PRICE INTEGER)')


cur.execute('insert into CHEF values("RAMSEY",1,"SPHAGEHETII")')
cur.execute('insert into CHEF values("LINGUINI",2,"TOAST")')

cur.execute('insert into CUSTOMER values("Shaym",12,9900521513)')
cur.execute('insert into CUSTOMER values("SHAM",21,8769053421)')

cur.execute('insert into FOOD_ITEM values(123, "CHEESEBURGER", 30)')
cur.execute('insert into FOOD_ITEM values(124, "CHICKEN BURGER", 50)')


info1 = ("James",22,9067812365)
info2 = ("Ramesh",33,"FISH")
info3 = (125,"SHAWARMA",700)
info4 = ("samarth", 44, "french toast")
info5 = (168, "DONUTS", 844)

cur.execute('insert into CUSTOMER(CUSTOMER_NAME,CUSTOMER_ID,CONTACT_ID) VALUES(?,?,?)',info1)
cur.execute('insert into CHEF(CHEF_NAME,CHEF_ID,SPECIALITY) VALUES(?,?,?)',info2)
cur.execute('insert into FOOD_ITEM(ITEM_ID,ITEM_NAME,PRICE) VALUES(?,?,?)',info3)
cur.execute('insert into CHEF(CHEF_NAME,CHEF_ID,SPECIALITY) VALUES(?,?,?)',info4)
cur.execute('insert into FOOD_ITEM(ITEM_ID,ITEM_NAME,PRICE) VALUES(?,?,?)',info5)


x = cur.execute('select *from CHEF')
for i in x:
    print(i)

y = cur.execute('select *from CUSTOMER')    
for i in y:
    print(i)

z = cur.execute('select *from FOOD_ITEM')    
for i in z:
    print(i)    
    
print("Done")  

def display_table(table_name):
  query=f'SELECT*FROM {table_name}'
  df=pd.read_sql_query(query,conn)
  print(f'Content of {table_name} table:')
  print(df)
  print('\n')

display_table('Chef')
display_table('Customer')
display_table('Food_item')

conn.close()