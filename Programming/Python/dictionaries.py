# Dictionaries

customer = {
    'name': 'John Smith',
    'age': 30,
    'is_verified': True,
}

print(customer['name'])
print(customer.get('birthdate', 'May 21 1990'))

customer['name'] = 'Sam Smith'
print(customer['name'])

print('\n')

phone = input('Phone: ')
digits_mapping = {
    '1': 'One',
    '2': 'Two',
    '3': 'Three',
    '4': 'Four',
    '5': 'Five',
    '6': 'Six',
    '7': 'Seven',
    '8': 'Eight',
    '9': 'Nine',
    '0': 'Zero',
}
output = ''

for char in phone:
    output += digits_mapping.get(char, '!') + ' '
print(output)

print('\n')

# Emoji Converter

message = input('> ')
words = message.split(' ')

emojis = {
    ':)': '😀',
    ':(': '😔',
}
output = ''

for word in words:
    output += emojis.get(word, word) + ' '
print(output)