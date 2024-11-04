def prime_or_not(n):
    for i in range(2,int(n**0.5) + 1):
        if(n%i == 0):
            return False
            break
    return True

def print_prime_until_n(n):
    if(n==1):
        print(" NONE ")
        return
    for i in range(2,n+1):
        if(prime_or_not(i)==True):
            print(i,end = " ")

n = int(input("Enter a Number: "))
print("Prime Numbers until ",n," : ")
print_prime_until_n(n)