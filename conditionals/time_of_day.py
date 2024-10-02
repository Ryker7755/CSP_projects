
import datetime

now = datetime.datetime.now().hour

if now <= 12:
    print("Good Morning!\n")
elif now <= 18:
    print("Good Afternoon!\n")
elif now <= 20:
    print("Good Evening!\n")
else :
    print("Good Night!\n")





