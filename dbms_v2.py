import sqlite3

def display_table(cursor, table_name):
    cursor.execute(f"SELECT * FROM {table_name}")
    rows = cursor.fetchall()

    cursor.execute(f"PRAGMA table_info({table_name})")
    columns = [column[1] for column in cursor.fetchall()]

    print(f"\n{table_name.capitalize()}:\n")
    print(" | ".join(columns))
    print("-" * (len(" | ".join(columns)) + (len(columns) - 1) * 3))

    for row in rows:
        print(" | ".join(str(cell) for cell in row))

conn = sqlite3.connect('recruitment_system.db')
cursor = conn.cursor()

display_table(cursor, "candidates")
display_table(cursor, "jobs")

conn.close()