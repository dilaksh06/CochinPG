def reverse (k):
    result=0
    if (k>0):
        result= k+reverse(k-1)
    else:
        result=0
    return result
print(reverse(5))


x=int(input("enter a number: "))

def sum_of_digit(y):
    
    if (y>0):
        sums=y%10+sum_of_digit(int(y/10))
    else:
        sums=0
    return(sums)

print(sum_of_digit(x))

s="it is global"
def f():
    global s
    print(s)
    s="it is local"
    print (s)

f()

x = lambda a: a + 10
print(x(100))


