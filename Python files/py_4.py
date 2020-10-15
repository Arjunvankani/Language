import numpy as np

print("Copy array operation ")
a = np.array([1,2,3])
copy1 = a.copy()
a[2] = 10
print(a)
print(copy1)

print("View array operation ...It's one type of cloning")
view1 = a.view()
a[2] = 10
print(a)
print(view1)


print("Shape array operation ")
arr1 = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
print("Shape of array :",arr1.shape)


print("Reshape array operation ")
arr = np.array([1,2,3,4,5,6,7,8,9,10,11,12])
reshape_array = arr.reshape(3,4)
reshape_array1 = arr.reshape(3,2,2)
print("2-D array..\n",reshape_array)
print("3-D array ..\n",reshape_array1)


print("Flatten array operation..")
print("Given array\n",reshape_array1)
print("Flatten array\n ", reshape_array1.flatten())

print("Flatten array operation.. example ")
array = np.arange(15).reshape(3, 5)
print("Given array\n",array)
print("Flatten array \n", array.flatten())