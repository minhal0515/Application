import numpy as np

m = int(input('Enter number of rows'))
n = int(input('Enter number of columns'))
a = []

for i in range(m):
	x = input()
	a.append([int(k) for k in x.split(' ')]) 

a = np.array(a)
w,_ = np.linalg.eig(a) 

real = True 
imaginary = True 
stable = True

for i in w:
	if type(i) != type(np.float64(1.0)): 
		real = False
		if not (i.real < 0 and i.imag > 0):
			stable = False
	else:
		imaginary = False
		if i >= 0:
			stable = False

if not real and not imaginary: 
	stable = False

if stable:
	print("Stable")
	
else:
	print("Unstable")

print(w)