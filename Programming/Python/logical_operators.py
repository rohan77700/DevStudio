# Logical Operators - and, or, not

has_high_income = True
has_good_credit = True

if has_high_income and has_good_credit:
    print("Eligible for loan")
else:
    print("Not eligible for loan")

has_high_income = True
has_good_credit = False

if has_high_income and has_good_credit:
    print("Eligible for loan")
else:
    print("Not eligible for loan")
print("\n")

has_high_income = False
has_good_credit = True

if has_high_income or has_good_credit:
    print("Eligible for loan")
else:
    print("Not eligible for loan")

has_high_income = True
has_good_credit = False

if has_high_income or has_good_credit:
    print("Eligible for loan")
else:
    print("Not eligible for loan")
print("\n")

has_good_credit = True
has_criminal_record = False

if has_good_credit and not has_criminal_record:
    print("Eligible for loan")
else:
    print("Not eligible for loan")

has_good_credit = True
has_criminal_record = True

if has_good_credit and not has_criminal_record:
    print("Eligible for loan")
else:
    print("Not eligible for loan")
print("\n")
