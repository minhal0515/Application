print(ord('A'))
print(chr(65))
print(chr(65+3))
a = 'PESU'
print(a, ": this is the plain text")
encrypted_msg = ""
for i in a:
    d = ord(i)
    s = d + 3
    encrypted_msg += chr(s)
print(encrypted_msg, ":the above msg is encrypted")
