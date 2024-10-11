num = 0
num += 1 
for num in range(1,51):
    if num%3 == 0 and num%5 == 0 and num != 0:
        print("FizzBuzz!")
    elif num%3 == 0 and num!= 0:
        print("Fizz!")
    elif num%5 == 0 and num!= 0:
        print("Buzz!")
    else:
        print(num)
    