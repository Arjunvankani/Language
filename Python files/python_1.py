def Intersection(A, B, C):
     s1 = set(A)
     s2 = set(B)
     s3 = set(C)
     set1 = s1.intersection(s2)
     output_set = set1.intersection(s3)
     output_list = list(output_set)
     print(output_list)
     
if __name__ == '__main__' :
    A=list()
n=int(input("Enter the size of the List :"))
print("Enter the number  ")
for i in range(int(n)):
     p=input()
     A.append(p)
print (A)


B=list()
n1=int(input("Enter the size of the List: "))
print("Enter the number  ")
for i in range(int(n1)):
 p=input()
 B.append(p)
print (B)

C=list()
n2=int(input("Enter the size of the List:"))
print("Enter the number  ")
for i in range(int(n2)):
 p=input()
 C.append(p)
print (C)

print("Comman element from of given array")
Intersection(A, B, C)


'''
def comman(a,b,c):
    d = [i for i in a if i in b]
    
    e = [ i for i in d if i in c]
    return e

a = ['a','b','c']
b = ['b','c','d']
c = ['x','y','b','c','e']


print("Frist input ")
f = comman(a,b,c)
print(f)


a1 = [1,3,2,4,6]
b1 = [2,4,6,8,9]
c1 = [3,1,4,6,7,2]
print("Second input ")
f1 = comman(a1,b1,c1)
print(f1)



def comman(a,b,c):
    d = [i for i in a if i in b]
    
    e = [ i for i in d if i in c]
    return e

def inputelement(list1):
    list1 = []
    n= int(input("Enter number of element :"))

    for i in range(0,n):
        ele = input("Enter element")
        list1.append(ele)
    return list1

a = []
b = []
c = []
inputelement(a)
inputelement(b)
inputelement(c)
f = comman(a,b,c)
print(f)

'''