def gcd(a, b):
    while b:
        a, b = b, a % b
        print(a)
        print(b)
    return a

num1 = 60
num2 = 48
print("GCD of", num1, "and", num2, "is:", gcd(num1, num2))