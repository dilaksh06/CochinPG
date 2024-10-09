x=int(input("enter a number :"))

sum=0
reamain_digit=0
reverse=""
while(x!=0):
    sum=sum+(x%10)
    reverse=reverse+str(x%10)
    x=int (x/10)
reverse=int(reverse)
print ("the sum of the digits of a number is",sum)
print ("the reversed form of the number is",reverse)
print(type(reverse))
