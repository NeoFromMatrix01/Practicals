import math
class Sphere:
    def __init__(self,radius):
        self.radius = radius
    
    def perimeter(self):
        return (2*math.pi*self.radius)
    
    def area(self):
        return (4*math.pi*self.radius**2)
        
    def volume(self):
        return ((4*math.pi*self.radius**3)/3)
        
        
s1 = Sphere(7)
print(s1.perimeter())
print(s1.area())
print(s1.volume())