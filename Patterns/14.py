'''
n=3:
A A A
  B B
    C
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i):
        print(" ",end = " ")
    for j in range(n-i):
        print(chr(65+i), end = " ")
    print()