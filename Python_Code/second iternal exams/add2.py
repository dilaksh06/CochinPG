class add:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def sum(self):
        print(self.a+self.b)
    def __add__(self,others):
        return add(self.a + others.a, self.b + others.b)
    def __mul__(self,others):
        return add(self.a * others.a, self.b * others.b)
    def __str__ (self):
        return(f"{self.a},{self.b}")

c=add(5,10)
d=add(6,7)

c.sum()

d=c+d
e=c*d
print(e)
print(d)
