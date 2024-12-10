import math
class equ_dist:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __sub__(self,other):
        return (math.sqrt((self.x-other.x)**2),math.sqrt((self.y-other.y)**2))

ab=equ_dist(5,2)
ad=equ_dist(4,6)
cd=ab-ad
print(cd)
