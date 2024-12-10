class student():
    batch="2024-2026"
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def datas(self,language):
        return(f"student {self.name} speaks {language}")
    def job(self,job):
        return(f"he works as a {job}")
        

student1=student("dilakshan",51)
print(f"{student1.name},the bathc is ,{student1.batch}")

student2=student("alexan",45)
print(student2.datas("malayalam")+" and "+student2.job("professor"))

class MCA:
    batch='MCA-A'

    def __init__(self,name,age):
        self.name=name
        self.age=age
    def __str__(self):
        return f"{self.name} is {self.age} years old"

roll_no1=MCA("dilakshan",21)
#roll_no1.age=26
del roll_no1.age
#print(roll_no1)
roll_no2=MCA("ales",45)
print(roll_no2)



class Person:
    pass
class Student(Person):
    pass

if (issubclass(Student,Person)):
    print("yes it is a sub clss")

class animal():
    def speak(self):
        print("animal is speaking")

doga=animal()
doga.speak()


class dog(animal):
    def bark(self):
        print("dog is barking")

dog().bark()


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        # Adding the x and y values of two Point objects
        return Point(self.x + other.x, self.y + other.y)

    def __str__(self):
        # This makes printing the object easier to read
        return f"({self.x},   {self.y})"

# Creating two Point instances
p1 = Point("k", "d")
p2 = Point("a", "b")

# Using the + operator, which calls __add__
p3 = p1 + p2
print(p3)  # Output: (6, 8)


    
class Box:
    def __init__(self,volume):
        self.volume=volume
    def __gt__(self,others):
        return(self.volume>others.volume)

box1=Box(100)
box2=Box(200)
if box1>box2:
    print("box1 is greater than box2")
    print(f" the box1 voume {box1.volume}> {box2.volume} is greater")
else:
    print("box2 is greater than box1")
    print(f" the box1 voume {box2.volume} >{box1.volume} is greater")


#result = "string" + 5


try:
    num=int(input("enter a number :"))
    result=10/num
except ValueError:
    print("enter a valid number")
except ZeroDivisionError:
    print("Error: zero divison erro")
else:
    print (f"the result is {result}")
finally:
    print("Execution complete.")


print("\n\n\n")

class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
    print(self.firstname, self.lastname)

class Student(Person):
  #def __init__(self, fname, lname):
      #self.firstname = fname
      #self.lastname = lname
      #Person.__init__(self, fname, lname)
      #super().printname()
    def say(self):
        super().printname()

x = Student("Mike", "Olsen")
x.say()



class fruit:
    def __init__(self,name):
        self.name=name
        print(f" I'm a fruit, my name is {self.name}")

    def getdetails(self):
        return self.name

class sweet_fruit(fruit):
    def __init__(self,name,color):
        self.name=name
        self.color=color
        print(f" I'm a sweet fruit, my name is {self.name} and my color is {self.color}")

    def getdetails(self):
        return self.name, self.color


f1=fruit("apple")
print(f1.getdetails())

f2=sweet_fruit("mango","yellow")
print(f2.getdetails())



class mainC():
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def display(self):
        print(f"the name is {self.name} and the age is {self.age}")


    
mainC1=mainC("dilakshan",56)
mainC1.display()

class mainD(mainC):
    def __init__(self,name,age):
        super().__init__(name,age)
mainC2=mainD("dfdf",374)
mainC2.display()
