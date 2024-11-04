n = int(input("Enter the Binary Number: "))
i = 0
ans = 0
while(n>0):
    rem = n%10
    ans += rem*(2**i)
    i +=1
    n = int(n / 10)
print("Decimal form is:",ans)