
print("Hello, and welcome to your finacial calculator!\n")
income = input ("how much do you make a month: \n")
utilities = input ("how much is your monthly utilities: \n")
rent = input ("how much is your monthly house or rent payment: \n")
groceries = input ("how much is your monthly groceries: \n")
transportation = input ("how much is your monthly transportation: \n")

expenses = rent + utilities + groceries + transportation
savings = income * 0.2
total = income - expenses - savings
prent = rent/income *100
putilities = utilities/income *100
pgroceries = groceries/income *100
ptransport = transportation/income *100
pexpenses = expenses/income *100

print("percent of your rent",prent)
print("percent of your utilities",putilities)
print("percent of your groceries",pgroceries)
print("percent of your transport",ptransport)
print("percent of your expenses",pexpenses)