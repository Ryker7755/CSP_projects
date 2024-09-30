age = int (input(" please insert age: \n"))
if age >= 18:
    print("you are old enough to vote")
elif age >= 16:
    print("you are old enough to drive")
elif age >= 15:
    print("you are old enough to get learners permit")
elif age >= 5:
    print("you are old enough to go to school")
if age < 5:
    print("you cant even go to school, you should get off this program")
    