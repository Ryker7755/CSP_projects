
def scanf(type):
    
    return input(f"how much is your {type}: ")

print("Hello, and welcome to your finacial calculator!\n")
income = float (scanf("income"))
utilities = float (scanf("utilities"))
rent= float (scanf("rent"))
groceries = float (scanf("groceries"))
transportation = float (scanf("transportation"))
expenses = rent + utilities + groceries + transportation
savings = income * 0.2
total = income - expenses - savings

def percent(type,amount):

    per = amount/income*100

    print(f"your {type} is {per}% income")


print("your income",income)
print("your expenses",expenses)
print("your savings",savings)
print("your total",total)
percent("rent",rent)
percent("utilities",utilities)
percent("groceries",groceries)
percent("transport",transportation)
percent("expenses",expenses)