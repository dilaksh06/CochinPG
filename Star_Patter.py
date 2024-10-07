z= int(input("enter a number to diplay star in rows : "))
print("pattern \n")
for x in range(z):
    for y in range(z):
        print(y,end=' ')
    print('\n')

print("pattern \n")


for x in range(z):
    for y in range(x+1):
        print('*',end='')
    print('\n')


print("pattern \n")

for x in range(z):
    for y in range(z-x):
        print('*',end='')
    print('\n')


print("pattern \n")


for x in range(z):
    for a in range(z-x):
        print('e',end='')
    for y in range(x+1):
        print(f'{y+1}',end=' ')
    print('\n')


print("pattern \n")


for x in range(z):
    for a in range(x+1):
        print(' ',end='')
    for y in range(z-x):
        print(f'{y+1}',end=' ')
    print('\n')
