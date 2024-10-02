time = int(input("what is the current time without ':' and in a (24) time: \n"))

if time == 24 or time >= 1 and time < 12:
    print("good morning\n")
elif time >= 12 and time < 18:
    print("good afternoon\n")
elif time <= 18 and time >= 21 or time == 21:
    print("good evening\n")
elif time > 21:
    print("good night\n")

