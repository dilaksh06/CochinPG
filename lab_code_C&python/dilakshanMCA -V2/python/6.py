# a=[[1,2,3],[4,6,8],[7,4,6]]
# b=[[4,5,6],[8,8,9],[1,3,4]]
# c=list()
# d=list()
# for x in range (len(a)):
# 	for y in range (len(a[x])):
		
# 		d.append(a[x][y]+b[x][y])
# 		print(d)
# 	c.append(d)
	
# 	d.clear()

# print(c)


a = [[1, 2, 3], [4, 6, 8], [7, 4, 6]]
b = [[4, 5, 6], [8, 8, 9], [1, 3, 4]]
c = []

for x in range(len(a)):
    d = []  # Initialize a new list for each row
    # print(d)
    for y in range(len(a[x])):
        d.append(a[x][y] + b[x][y])
        # print(d)
    c.append(d)

print(c)

		
