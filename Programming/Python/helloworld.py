# Python
print('*' * 12)
print("Hello World!")
print('Hey, Python')
print('*' * 12)

print("\n")

# Variables
count = 1000
rating = 4.99
is_published = False
print(count, rating, is_published)

# Variable Names
course_name = "Python Programming"
print(course_name)
print(len(course_name))

# Strings
print(course_name[0])
print(course_name[-3])
print(course_name[0:5])

print("\n")

# Escape Sequences
course_full_name = "Python Programing \"Double quotes\"" # \" for double quotes
print(course_full_name)

course_full_name = "Python Programing \'Single quotes\'" # \' for single quotes
print(course_full_name)

course_full_name = "Python Programing \\Backslash\\" # \\ for adding backslash
print(course_full_name)

course_full_name = "Python Programing \nNew line" # \n for new line
print(course_full_name)

print("\n")

# Formatted Strings
first_name = "Ro"
last_name = "Han"
full_name = first_name + " " + last_name
print(full_name)
full_name_formated = f"{first_name} {last_name}"
print(full_name_formated)

print("\n")

# String Methods
string_sentence = "lets do python programming and develop applications"

print(string_sentence.upper()) # convert to upper case
print(string_sentence.lower()) # convert to lower case
print(string_sentence.title()) # convert to upper case first letter of each word
print(string_sentence.strip()) # remove blank spaces at the end and at the beginning of a string
print(string_sentence.lstrip()) # remove blank spaces at the beginning of a string
print(string_sentence.rstrip()) # remove blanck spaces at the end of a string
print(string_sentence.find("app")) # to find index
print(string_sentence.replace("p", "P")) # to replace letter

print("pro" in string_sentence) # check the existence of a characters or a sequence of characters, returns a boolean value
print("abc" in string_sentence)
print("pro" not in string_sentence) # check if a string does not contain a characters or a sequence of caracters, returns a boolean value
print("abc" not in string_sentence)

print("\n")

# Numbers
x = 10  # Integer number
y = 3.5  # Float number
z = 3 + 2j  # Complex number

# Arithmetic Operations
print(10 + 3)  # Addition
print(10 - 3)  # Subtration
print(10 * 3)  # Multiplication
print(10 / 3)  # Division
print(10 // 3)  # Division but returns an interger
print(10 % 3)  # Remander of division
print(10 ** 3)  # Exponent

x = x + 3
print(x)
y += 3
print(y)

# Operator Precedence
x = 10 + 3 * 2 ** 2
print(x)
y = (2 + 3) * 10 - 3
print(y)
# exponentiation 2 ** 2
# multiplication or division
# addition or subraction

print("\n")

# Type Conversion
x = input("x: ")  # Default I/O Type, the input will always be a string
print(type(x))
y = int(x) + 5
print(f"x: {x} ; y: {y}")

birth_year = input("Birth year: ")
print(type(birth_year))
age = 2024 - int(birth_year)
print(type(age))
print("Age:", age)

# type converters
# int() converts to interger
# float() converts to float
# bool() converts to boolean
# str() converts to string
# list() converts to list
# tuple() converts to tuple
# set() converts to set
# dict() converts to dictionary

# Values that return False
print(bool(""))  # Double quotations returns False
print(bool(0))  # 0 returns False
print(bool(None)) # returns False
# Other values return True
print(bool(2))

weigth_lbs = input('Weight(lbs): ')
weigth_kg = int(weigth_lbs) * 0.45
print("Weight:", weigth_kg)

print("\n")
