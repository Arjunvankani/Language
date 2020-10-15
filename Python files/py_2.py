import numpy as np

b = np.array([[1,2,3],[4,5,6]])

print("2-D array of ..\n",b)
print("Addition of array..\n",b+5)
print("Multiplication of array..\n",b*5)
print("Subtraction of array..\n",b-5)
print("Division of array..\n",b / 5)


print(" Two element using operation ")
a = np.array([[10,20,30],[40,50,60]])
print("2-D array of a",a)
print("Addition of array..\n",a+b)
print("Multiplication of array..\n",a*b)
print("Subtraction of array..\n",a-b)
print("Division of array..\n",a/b)