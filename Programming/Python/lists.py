# Lists

names = ['Jisoo', 'Jennie', 'Rosé', 'Lisa']
print(names)

print(names[0])
print(names[1])
print(names[2])
print(names[-1])

print(names[2:])
print(names[0:2])

names[-1] = 'Lalisa'
print(names)  

print('\n')


# find largest number
numbers = [3, 6, 10, 2, 8, 4]
max = numbers[0]

for number in numbers:
    if number > max:
        max = number
print("Largest:", max)

print('\n')


# 2D Lists

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]
print(matrix[0][1])

matrix[0][1] = 20
print(matrix[0][1])

print('\n')

for row in matrix:
    for item in row:
        print(item)

print('\n')


# List Methods

numbers = [5, 2, 1, 7, 5, 4]

print(numbers.index(7)) # index of list
print(numbers.count(5)) # count in list
numbers.append(20) # added at the end of list
print(numbers)
numbers.insert(0, 10) # added at the middle or at the beginning
print(numbers)
numbers.remove(5) # removed from list
print(numbers)
numbers.pop() # removed from last item of list
print(numbers)
numbers.sort() # sorted list
print(numbers)
numbers.reverse() # reversed list
print(numbers)
num = numbers.copy()
print(num)
numbers.clear() # empty list
print(numbers)

print('\n')

numbers = [2, 2, 4, 6, 3, 4, 6, 1]
uniques = []

for number in numbers:
    if number not in uniques:
        uniques.append(number)
print(uniques)