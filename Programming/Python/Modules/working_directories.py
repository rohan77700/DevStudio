# Working with Directories
# Absolute path
# Relative path

from pathlib import Path

path = Path("Packages/ecommerce")
print(path.exists())

path = Path("emails")
# print(path.mkdir()) # to create directory
print(path.rmdir()) # to remove directory

path = Path()
for file in path.glob('*.py'):
    print(file)