'''
IMP
n=3:
    1
  1 2 1
1 2 3 2 1
'''

n  = int(input("Enter a number: "))
for i in range(n):
    for j in range(n-i-1):
        print(" ",end = " ")
    for j in range(i+1):
        print(j+1,end = " ")
    for j in range(i):
        print(i-j,end = " ")
    print()