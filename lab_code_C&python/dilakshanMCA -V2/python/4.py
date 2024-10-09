import math

class circle():
	def __init__(self,radius):
		self.radius=radius
	def perimeter(self):
		
		return (round(2*math.pi*self.radius,2))

	def area(self):
		
		return (round(math.pi*self.radius*self.radius,2))


Radius= int(input("enter the radius of the circle : "))

newcircle=circle(Radius)

print("the perimeter is", newcircle.perimeter())
print("the area is",newcircle.area())
