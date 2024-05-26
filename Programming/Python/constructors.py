# Constructors
# To create a constructor we call "__init__" method.
# "self" is a reference to the current object.

class Point:
    def __init__(self, x, y): 
        self.x = x
        self.y = y

    def move(self):
        print('move')

    def draw(self):
        print('draw')

point = Point(10, 20)
print(point.x)
print(point.y)

print('\n')


class Person:
    def __init__(self, name):
        self.name = name

    def talk(self):
        print(f"Hi, I'm {self.name} ")

sam = Person("Sam Smith")
sam.talk()

bob = Person("Bob Smith")
bob.talk()