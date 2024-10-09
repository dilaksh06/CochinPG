list_limit=int(input("enter the size of the list: "))
numb_list=[]

sorted_list=[]
for x in range(list_limit):
    get_input=int(input(f"enter the {x+1} number : "))
    numb_list.append(get_input)

print(numb_list)

for a in range(len(numb_list)):
    #print (a)
    for b in range (len(numb_list)-1):
        print(numb_list[a+b],end='')
    print("\n")
        
print(sorted_list)
                        
