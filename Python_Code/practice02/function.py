def factorial(k):
    if(k==0):
        return 1
    else:
        return (k*factorial(k-1))


x=int(input("enter a number : "))
print("the factorial of number is  : ",factorial(x))
