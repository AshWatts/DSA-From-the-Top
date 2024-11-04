'''
n=3:
A
B A
C B A
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i+1):
        print(chr(65+i-j), end = " ")
    print()