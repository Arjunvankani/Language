A=list()
B=list()
n=int(input("Enter the size of the List ::"))
print("Enter the Element of first list::")
for i in range(int(n)):
     k=int(input(""))
     A.append(k)
n1 = int(input("Enter the size of the List ::"))
print("Enter the Element of second list::")
for i in range(int(n1)):
     k=int(input(""))
     B.append(k)
C=set(list(A))
print(C)
D=set(list(B))
print(D)
print("Union :", C|D)
print("Intersection :", C&D)
print("Difference :", C - D)
print("Symmetric difference :", C ^ D)