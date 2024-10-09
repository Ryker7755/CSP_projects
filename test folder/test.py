import random
siblings = ("Tyson","Ryker","Juni")
count = 0
num = random.randint(1,11)
for x in range(1,11):
    if x == num:
        print("Goose!")
        break
    else:
        print("Duck")
