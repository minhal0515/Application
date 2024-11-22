import random
from sympy import mod_inverse

def generate_keys():
    p = int(input("Choose a large prime number P: "))    
    g = int(input("Choose a primitive root of g: "))
    a = random.randint(2, p-2)
    A = pow(g, a, p)    
    return (p, g, A), (p, a)

def encrypt(message, public_key):
    p, g, A = public_key
    k = random.randint(2, p-2)
    c1 = pow(g, k, p)
    c2 = (message * pow(A, k, p)) % p
    
    return c1, c2

def decrypt(ciphertext, private_key):
    p, a = private_key
    c1, c2 = ciphertext
    s = pow(c1, a, p)
    s_inverse = mod_inverse(s, p)    
    message = (c2 * s_inverse) % p
    
    return message

public_key, private_key = generate_keys()
print("Public key:", public_key)
print("Private key:", private_key)

message = 9
ciphertext = encrypt(message, public_key)
print("Ciphertext:", ciphertext)

decrypted_message = decrypt(ciphertext, private_key)
print("Decrypted message:", decrypted_message)