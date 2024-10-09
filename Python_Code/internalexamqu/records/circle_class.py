import math 
class circle():
    def __init__(self,radius):
        self.radius=radius
    def perimeter(self):
        return (2*math.pi*self.radius)
    def area(self):
        return(2*math.pi*self.radius*self.radius)

x=circle(2)
print(x.perimeter())
print(x.area())
