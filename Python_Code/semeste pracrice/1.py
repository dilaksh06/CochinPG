import numpy as np

arr = np.random.randint(1, 100, size=(4, 3))  # 4x3 array of random integers from 1 to 99
print(arr)

arr=np.random.randint(1,9,size=(3,3))
print(arr)

lst=[x for x in range(10)]



# Create a 5x5 array filled with zeros
arr = np.zeros((5, 5), dtype=int)

# Set the center value to 1
arr[2, 2] = 1

print(arr)

arr=np.random.randint(1,50,size=(1,50))

print(arr)
arr=np.array([x for x in arr if any(x%5==0)])
print(arr)



# Create a 1D numpy array with values from 10 to 50
arr = np.arange(10, 51)

# Extract values divisible by 5
div_by_5 = arr[arr % 5 == 0]

print(div_by_5)


print(np.random.randint(1, 10,size=(3,3)))  # Random int between 1 and 9 (inclusive of 1, exclusive of 10)


identity_matrix = np.eye(3)

print(identity_matrix)

array_1=np.arange(1,21)
array_1=array_1.reshape(4,5)
print(array_1)


a1=np.random.randint(1,7,size=(2,3))
a2=np.random.randint(8,16,size=(3,2))


print("\n\n\n",np.dot(a1,a2))

ar3=np.random.rand(1,10)
print(ar3)
ar3[ar3<0.5]=0
print("shorted less thane 0.5\n",ar3)
