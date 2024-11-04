def prime_or_not(n):
    if(n==1):
        print("Neither Prime nor Composite")
        return
    for i in range(2,int(n**0.5) + 1):
        if(n%i == 0):
            print("A Composite Number")
            break
    else:
        print("Prime Number")

n = int(input("Enter a Number: "))
prime_or_not(n)