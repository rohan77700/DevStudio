# For Loops

for item in ['Python', 'JavaScript', 'Java', 'C++']:
    print(item)

print('\n')

for item in range(10):
    print(item)

print('\n')

for item in range(5, 10, 2):
    print(item)

print('\n')


prices = [10, 20, 30]
total = 0

for price in prices:
    total += price
print(f"Total: {total}")