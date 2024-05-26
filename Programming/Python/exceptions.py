# Exceptions
# Built-in Exceptions - https://docs.python.org/3/library/exceptions.html

try:
    age = int(input('Age: '))
    income = 2000
    risk = income / age
    print(age)
except ZeroDivisionError:
    print("Age can't be 0")
except ValueError:
    print('Invalid value')