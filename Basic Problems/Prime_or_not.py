n = int(input("Enter a number: "))
if n == 1:
    print("1 is neither prime nor composite")
elif n == 2:
    print("2 is a prime number")
else:
    for i in range(2, int(n**0.5) + 1):         #IMP - n**0.5 is used to reduce the time complexity
        if n % i == 0:
            print(n, "is not a prime number")
            break
    else:
        print(n, "is a prime number")