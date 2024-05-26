# Inheritance

class Mammal:
    def walk(self):
        print('Walk')

class Dog(Mammal):
    def bark(self):
        print('Bark')

class Cat(Mammal):
    def meow(self):
        print('Meow')

dog1 = Dog()
dog1.walk()

dog2 = Dog()
dog2.bark()

cat1 = Cat()
cat1.walk()

cat2 = Cat()
cat2.meow()