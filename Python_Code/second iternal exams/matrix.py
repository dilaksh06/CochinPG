import random
import numpy as np
x = random.randint(1, 10)

#print(x)

B=np.array(range(16)).reshape(4,4)
#print(B)

#print(type(B))


a = np.random.randint(1, 10, size=(4, 4))
print(a)

print(f"ths sum of the value in the matix is {np.sum(a)}")
print(f"ths mean of each row is {np.mean(a,axis=1)}")
print(f"ths maximum value oth the each column is {np.max(a,axis=0)}")

#sum=0
#sum_row=0

#print(np.mean(a,axis=0))
#means=[]
#for i in np.nditer(a):
#    sum=sum+i
    
#print(f"the sum of the numbers in the matrix is {sum}")
#print(type(a))

