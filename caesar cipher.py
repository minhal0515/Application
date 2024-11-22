'''def caesar_cipher(text, shift):
    result = ""
    for char in text:
        if char.isalpha():
            is_upper = char.isupper()
            ascii_code = ord(char)
            shifted_code = (ascii_code - ord('A' if is_upper else 'a') + shift) % 26
            shifted_char = chr(shifted_code + ord('A' if is_upper else 'a'))
            result += shifted_char
        else:
            result += char
    return result

plaintext = "Hello, World!"
shift_amount = 3
ciphertext = caesar_cipher(plaintext, shift_amount)

print("Plaintext:", plaintext)
print("Ciphertext:", ciphertext)'''
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
