def add (a,b):
    return a+b
def sub (a,b):
    return (a-b)
def mul(a,b):
    return (a*b)
def div(a,b):
    return(a/b)
def pwow(a,b):
    return(a**b)

print("this is arithmetic calculator")
print("press 1 to add two numbers")
print("press 2 to subtract two numbers")
print("press 3 to multiplication two numbers")
print("press 4 to division two numbers")
print("press 5 to find power")

while(True):
    a=int(input("enter the choice : "))
    if(a==6):
        print("Exiting...")
        break  # Use break to exit the loop
    x=int(input("enter the first number : "))
    y=int(input("enter the second number : "))
    if(a==1):
        print(add(x,y))
        continue
    elif(a==2):
        print(sub(x,y))
        continue
    elif(a==3):
        print(mul(x,y))
        continue
    elif(a==4):
        print(div(x,y))
        continue
    elif(a==5):
        print(pow(x,y))
        continue
    else:
        print("invalid input trya again")
            
        
 
