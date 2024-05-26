# Modules
import converters, utils
from converters import kg_to_lbs
from utils import find_max

kg_to_lbs(100)
print(converters.lbs_to_kg(160))

print('\n')


numbers = [10, 3, 6, 2]
maximum = find_max(numbers)
print(maximum)