n = int(input("Enter a number: "))  
if n & (n-1) == 0:
    print("Yes, the number is a power of 2")
else:
    print("No, the number is not a power of 2")