 monkey patching python
----------------------------

class Test:
   def __init__(self,x):
        self.a=x
   def getdata(self):
       print("some code to fetch the data from data base")
   def f1(self):
       self.getdata()
   def f2(self):
       self.getdata()
        

x=Test(5)
x.f1()
x.f2()
def get_update():
    print("some code")

x.f1=get_update
x.f1()
x.f2()


=================================================================
Produce first N prime number using generator


def primeGenerator(n):
    num=2
    while n:
        if isPrime(num):
            yield num
            n-=1
        num+=1  
    return

def isPrime(num):
    for i in range(2,num-1):
        if num%i==0:
            return False
    return True
        
it =primeGenerator(10)
for i in it:
    print(i,end=' ')
===============================================================================
     find avergae with variable number argument
     
     def AverageNger(*t):
    avg=sum(t)//len(t);
    print(avg)
    
AverageNger(1,3,4)
AverageNger(1,3,4,5,6,7)
AverageNger(3,4)

