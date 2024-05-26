# Nested Loops - Loops inside other loops

for x in range(4):
    for y in range(3):
        print(f"({x}, {y})")
        
print('\n')

# okay way to approach
numbers = [5, 2, 5, 2, 2]
for item in numbers:
    print('X' * item)

print('\n')

# best way to approach
numbers = [5, 2, 5, 2, 2]
for x_count in numbers:
    output = ''
    for count in range(x_count):
        output += 'X'
    print(output)