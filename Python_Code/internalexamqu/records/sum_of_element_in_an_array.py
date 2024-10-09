number_of_array=int(input("enter the size of aray :"))
this_array=[]
sum=0
for i in range (number_of_array):
    enter_array_value=int(input("enter the value :"))
    this_array.append(enter_array_value)


for i in range (number_of_array):
    sum=sum+this_array[i]

print(f"the sum of the array in the list is {sum}")
