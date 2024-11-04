'''
IMP
n=3:
1 1 1
  2 2
    3
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i):
        print(" ", end = " ")
    for j in range(n-i):
        print(i+1, end = " ")
    print()