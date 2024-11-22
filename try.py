from threading import *
import sys
import time
import random
lock=Lock()

def fn1():
	s='ABC'
	for i in range(len(s)):
		lock.acquire()
		print(s[i],end='')
		sys.stdout.flush()
		time.sleep(int(random.random()*3))
		print(s[i],end='')
		sys.stdout.flush()
		lock.release()
		time.sleep(int(random.random()*3))

def fn2():
	s='abc'
	for i in range(len(s)):
		lock.acquire()
		print(s[i],end='')
		sys.stdout.flush()
		time.sleep(int(random.random()*3))
		print(s[i],end='')
		sys.stdout.flush()
		lock.release()
		time.sleep(int(random.random()*3))

t1=Thread(target=fn1)
t2=Thread(target=fn2)
t1.start()
t2.start()
t1.join()
t2.join()
