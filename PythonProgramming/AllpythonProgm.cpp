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
     
     
       Instace Member Variable with Dict 
==========================================

class Test:
    def __init__(self):
        self.a=10
    def val(self):
        self.b=20
    
ob=Test()
obb=Test()
ob.val()
ob.x=30
print(ob.__dict__)
print(obb.__dict__)

  factorial using lambda and recursion
==========================================

f =lambda n:1 if n==0 else n*f(n-1)
r=f(5)
print(r)

   List Comprehension
=============================

l=[i for i in range(1,11)]

l2=[i for i in l if i%2==0]

print(l)
print(l2)

 String Revese using list and string
=========================================

s="this is rishi"
l=s.split(' ')
l.reverse()
s=' '.join(l)

print(l)
print(s)
 
   Iteration method
==========================

my_list=[2,3,4,5,6]
it=iter(my_list)
while True:
    try:
        print(next(it))
    except StopIteration:
        break

 Even Number using iterator
=============================
def GeneratorEven(n):
    i=1;
    while n:
        yield i*2
        i+=1
        n-=1
        
it=GeneratorEven(10)
list =[]
while True:
    try:
        list.append(next(it))
    except:
        break
print(list)




