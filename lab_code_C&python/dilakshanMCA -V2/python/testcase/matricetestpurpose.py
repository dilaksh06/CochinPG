a=[[1,2,3],[4,6,8],[7,4,6]]
b=[[4,5,6],[8,8,9],[1,3,4]]
c=list()
d=[[0,0,0],[0,0,0],[0,0,0]]

"""
for x in range (len(a)):
	for y in range (len(a[x])):
		
		d.append(a[x][y]+b[x][y])
		print(d)
	c.append(d)
	
	d.clear()

print(c)
	"""


d=[[0,0,0],[0,0,0],[0,0,0]]
for x in range (len(a)):
	for y in range (len(a[x])):
		
		d[x][y]=a[x][y]+b[x][y]

print(d)	
