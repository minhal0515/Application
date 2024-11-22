from sympy.ntheory.modular import solve_congruence

def chinese_remainder_theorem(moduli, remainders):
    solution = solve_congruence(remainders, moduli)
    return solution  

moduli = [3, 5]  
remainders = [2, 3]  

result = chinese_remainder_theorem(moduli, remainders)
print("The solution to the system of congruences is:", result)

