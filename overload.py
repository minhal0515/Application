#concept of flush
import time 
for i in range(10): 
    print(i) 
    time.sleep(1)
#------
import time  
for i in range(10): 
    print(i, end =' ') 
    time.sleep(1)
#--------
import time 
import sys
for i in range(10): 
    print(i, end =' ') 
    sys.stdout.flush() 
    time.sleep(1)
#-----------
import time   
for i in range(10): 
    print(i, end =' ', flush = True) 
    time.sleep(1)
