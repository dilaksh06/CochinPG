z= int(input("enter a number to diplay star in rows : "))
print("pattern n*n \n")
for x in range(z):
    for y in range(z):
        print(y,end=' ')
    print('\n')

print("pattern increading star\n")


for x in range(z):
    for y in range(x+1):
        print('* ',end='')
    print('\n')


print("pattern  decreasing star\n")

for x in range(z):
    for y in range(z-x):
        print('* ',end='')
    print('\n')


print("pattern pyramid\n")


for x in range(z):
    for a in range(z-x):
        print(' ',end='')
    for y in range(x+1):
        print(f'{y+1}',end=' ')
    print('\n')


print("pattern  up down pyramid\n")


for x in range(z):
    for a in range(x+1):
        print(' ',end='')
    for y in range(z-x):
        print(f'{y+1}',end=' ')
    print('\n')



print("pattern\n")


for x in range(z):
    for a in range(z-x):
        print(' ',end=' ')
    for y in range(x+1):
            print(f' {y+1}',end='')
    print('\n')


factorial=1
for a in range(1,z+1):
    if(z>0):
        factorial=factorial*a

print(f'the factorial of the nmber {z} is {factorial}')
    
    

