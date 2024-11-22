from threading import *
print(current_thread().name)
def f1():
    print(t1.is_alive())
    print(active_count())
    print("child thread")
    print("thread executing",current_thread().name)

t1=Thread(target=f1,name='thread1')
t1.start()
t1.join()
