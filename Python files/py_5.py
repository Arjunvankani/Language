import numpy as np
print("Matrix operation ..\n")
matrix = np.array( [ [ 4, 5, 6 ],
                     [ 7, 8, 9 ],
                     [ 10, 11, 12 ] ] )
matrix1 = np.array( [ [ 1, 2, 3 ],
                     [ 4, 5, 6 ],
                     [ 7, 8, 9 ] ] )

mat = np.random.rand(4)

print(matrix)
print(matrix1)
print("\nTranspot of matrix\n",matrix.transpose())
print("Array of random ",mat)
mat.sort()
print("\n sort all element from matrix\n",mat)
print("\nAddition of two matrix \n",matrix+matrix1)
print("\nMultiplication of two matrix \n",matrix*matrix1)
print("\nMinimum element from matrix \n",matrix.max())
print("\nMultiplication of from matrix \n",matrix.min())
print("\nSum of the matrix \n",matrix.sum())
print("\nAverage of matrix \n",matrix.mean())
print("\nProduct of matrix \n",matrix.prod())


