a=input("enter a string")
k=int(input("enter key"))
enctxt=""
for i in a:
    b=ord(i)
    c=(k*b)
    d=c%26
    enctxt=enctxt+chr(d+65)
print(enctxt)