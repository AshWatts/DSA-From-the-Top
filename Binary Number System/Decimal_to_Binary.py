n = int(input("Enter the Decimal Number: "))
ans = 0
pow = 1
while(n>0):
    rem = n % 2
    n = int(n/2)
    ans += (rem*pow)
    pow *= 10
print(ans)