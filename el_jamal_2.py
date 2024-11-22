import random
from sympy import mod_inverse

p = int(input("Enter large prime number: "))
d = int(input("Enter decryption key: "))
e1 = int(input("Select second part of encryption key: "))
e2 = (e1**d)%p 
print("Public key:", e1, e2, p)
print ("Private key: ", d)
#encryption
r = int(input("Enter random integer: "))
c1 = (e1**r)%p
pt = int(input("Enter Plaintext: "))
c2 = (pt*e2**r)%p
print("The ciphertext is: ", c1, c2)
#decryption
a = (c1**d)%p
inv = mod_inverse(a,p)
message = (c2*inv)%p
print("Decrypted message: ",message)