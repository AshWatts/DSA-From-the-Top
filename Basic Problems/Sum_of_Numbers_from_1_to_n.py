n = int(input("Enter a number: "))
'''
sum = 0
for i in range(1, n+1):
    sum += i
'''
# sum = n * (n + 1) / 2
# print("Sum of numbers from 1 to ", n, " is : ", sum)

# Sum of odd numbers from 1 to n
sum = 0
for i in range(1, n+1, 2):
    sum += i
print("Sum of odd numbers from 1 to ", n, " is : ", sum)