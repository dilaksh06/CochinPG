print("this is numpy library")
print("NumPy is a Python library used for working with arrays.")

import numpy as np

arr=np.array([1,2,3,4,5,6,7])

print (arr)

print(type(arr))

print(np.__version__)


print("""0-D arrays, or Scalars, are the elements in an array.
Each value in an array is a 0-D array.\n""")


arr = np.array(42)

print(arr)



print("""An array that has 0-D arrays as its elements is called uni-dimensional or 1-D array.\n""")

arr = np.array([1, 2, 3, 4, 5])

print(arr)

print("""An array that has 1-D arrays as its elements is called a 2-D array.\n""")

arr = np.array([[1, 2, 3],[4, 5, 6]])

print(arr)


print("""An array that has 2-D arrays (matrices) as its elements is called 3-D array.\n""")



arr = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])

print(arr)


print("""NumPy Arrays provides the ndim attribute that returns an integer that tells us how many dimensions the array have.""")

a = np.array(42)
b = np.array([1, 2, 3, 4, 5])
c = np.array([[1, 2, 3], [4, 5, 6]])
d = np.array([[[1, 2, 3], [4, 5, 6]], [[1, 2, 3], [4, 5, 6]]])

print(a.ndim)
print(b.ndim)
print(c.ndim)
print(d.ndim)


print("""An array can have any number of dimensions.
When the array is created, you can define the number of dimensions by using the ndmin argument.
""")

arr = np.array([1, 2, 3, 4], ndmin=5)

print(arr)
print('number of dimensions :', arr.ndim)


print("""Array indexing is the same as accessing an array element.""")

arr = np.array([1, 2, 3, 4])

print(arr[0])


print("get the third and fourth element in an array and add them")

arr = np.array([1, 2, 3, 4])

print(arr[2] + arr[3])

print("accessing 2-D arrays")

arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])

print('2nd element on 1st row: ', arr[0, 1])


print("get the third and fourth element in an array and add them")

arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])

print('5th element on 2nd row: ', arr[1, 4])



x=np.array(42)
print(x)

print(x.ndim)


cd=np.array([1,2,4,8,9],ndmin=5)
print("the structure of the array that will look", cd)
print(cd.ndim)


print("accessing elements in array : ")

arr = np.array([[1,2,3,4,5], [6,7,8,9,10]])

print('5th element on 2nd row: ', arr[1, 4])


print("accessing 3d arrays")

arr = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])

print(arr[0, 1, 2])

print("Slicing in python means taking elements from one given index to another given index.")

arr = np.array([1, 2, 3, 4, 5, 6, 7])

print(arr[1:5])


arr = np.array([1, 2, 3, 4, 5, 6, 7])

print(arr[4:])


arr = np.array([1, 2, 3, 4, 5, 6, 7])

print(arr[:4])
