import sqlite3

conn = sqlite3.connect('restaurant.db')
cur = conn.cursor()

cur.execute('''
CREATE TABLE IF NOT EXISTS Chef (
    chef_id INTEGER PRIMARY KEY,
    chef_name TEXT NOT NULL,
    specialty TEXT NOT NULL
)
''')

cur.execute('''
CREATE TABLE IF NOT EXISTS Customer (
    customer_id INTEGER PRIMARY KEY,
    customer_name TEXT NOT NULL,
    contact_id TEXT NOT NULL
)
''')

# Create Food_items table
cur.execute('''
CREATE TABLE IF NOT EXISTS Food_items (
    item_id INTEGER PRIMARY KEY,
    item_name TEXT NOT NULL,
    price REAL NOT NULL
)
''')

cur.executemany('''
INSERT INTO Chef (chef_id, chef_name, specialty) VALUES (?, ?, ?)
''', [
    (1, 'Gordon Ramsay', 'British'),
    (2, 'Massimo Bottura', 'Italian'),
    (3, 'Dominique Crenn', 'French'),
    (4, 'José Andrés', 'Spanish'),
    (5, 'René Redzepi', 'Nordic')
])

cur.executemany('''
INSERT INTO Customer (customer_id, customer_name, contact_id) VALUES (?, ?, ?)
''', [
    (1, 'Alice Johnson', 'C001'),
    (2, 'Bob Smith', 'C002'),
    (3, 'Carol White', 'C003'),
    (4, 'David Brown', 'C004'),
    (5, 'Eve Davis', 'C005')
])

# Insert data into Food_items table
cur.executemany('''
INSERT INTO Food_items (item_id, item_name, price) VALUES (?, ?, ?)
''', [
    (1, 'Spaghetti Carbonara', 12.50),
    (2, 'Beef Wellington', 35.00),
    (3, 'Sushi Platter', 20.00),
    (4, 'Paella', 25.00),
    (5, 'Nordic Salmon', 30.00)
])

conn.commit()

print("Chef Table:")
cursor = cur.execute('SELECT * FROM Chef')
rows = cursor.fetchall()
print("chef_id | chef_name        | specialty")
print("---------------------------------------")
for row in rows:
    print(f"{row[0]:<7} | {row[1]:<15} | {row[2]}")

print("\nCustomer Table:")
cursor = cur.execute('SELECT * FROM Customer')
rows = cursor.fetchall()
print("customer_id | customer_name  | contact_id")
print("------------------------------------------")
for row in rows:
    print(f"{row[0]:<11} | {row[1]:<15} | {row[2]}")

print("\nFood_items Table:")
cursor = cur.execute('SELECT * FROM Food_items')
rows = cursor.fetchall()
print("item_id | item_name          | price")
print("-------------------------------------")
for row in rows:
    print(f"{row[0]:<7} | {row[1]:<18} | {row[2]:.2f}")

conn.close()
