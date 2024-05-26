# Generating Random Values
import random

for i in range(3):
    print(random.random())
    print(random.randint(10, 20))

print('\n')

members = ['Jisoo', 'Jennie', 'Rosé', 'Lisa']
leader = random.choice(members)
print(leader)

print('\n')


# Dice
class Dice:
    def roll(self):
        first = random.randint(1, 6)
        second = random.randint(1, 6)
        return first, second

dice = Dice()
print(dice.roll())