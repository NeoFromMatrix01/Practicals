import math
class Sphere:
    def __init__(self,radius):
        self.radius = radius
    def diameter(self):
        return (self.radius*2)

    def circumference(self):
        return (2*math.pi*self.radius)
    
    def volume(self):
        return (4*math.pi*self.radius**3)/3

s1 = Sphere(7)
print(round(s1.circumference(),2))
print(round(s1.diameter(),2))
print(round(s1.volume(),2))