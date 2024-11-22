from Crypto.Cipher import DES
from Crypto import Random
import base64

def pad(text):
    while len(text) % 8 != 0:
        text += b' '
    return text

def des_encrypt(key, plaintext):
    plaintext = pad(plaintext)
    iv = Random.new().read(DES.block_size)
    cipher = DES.new(key, DES.MODE_CBC, iv)
    ciphertext = iv + cipher.encrypt(plaintext)
    return base64.b64encode(ciphertext)

def des_decrypt(key, ciphertext):
    ciphertext = base64.b64decode(ciphertext)
    iv = ciphertext[:DES.block_size]
    cipher = DES.new(key, DES.MODE_CBC, iv)
    plaintext = cipher.decrypt(ciphertext[DES.block_size:])
    return plaintext.rstrip()

key = b'01234567' # 8-byte key
plaintext = b'This is a secret message'
encrypted = des_encrypt(key, plaintext)
print("Encrypted:", encrypted)
decrypted = des_decrypt(key, encrypted)
print("Decrypted:", decrypted.decode('utf-8'))