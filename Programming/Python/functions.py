# Functions

def greet_user():
    print('Hi, there')
    print('Welcome aboard')

greet_user()

print('\n')


# Parameters

def greet(first_name, last_name):
    print(f"Hi, {first_name} {last_name}")
    print('Welcome aboard')

greet("Chris", "Martin")
greet("Jennie", "Kim")

print('\n')


# Keyword Arguments

def greeting(first_name, last_name):
    print(f"Hi, {first_name} {last_name}")
    print('Welcome aboard')

greeting("Chris", "Martin")
greeting(last_name="Kim", first_name="Jennie")

print('\n')


# Return Statement - By default, all functions return the value -> None

def square(number):
    return number * number

print(square(3))

print('\n')


# Creating a Reusable Function

def emoji_converter(message):
    words = message.split(' ')

    emojis = {
        ':)': '😀',
        ':(': '😔',
    }
    output = ''

    for word in words:
        output += emojis.get(word, word) + ' '
    
    return output

message = input('> ')
print(emoji_converter(message))

print('\n')