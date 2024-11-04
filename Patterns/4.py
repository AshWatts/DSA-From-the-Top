'''
n=3:
A B C
D E F
G H I'''

n = int(input("Enter a number: "))
a = 65
for i in range(n):
    for j in range(n):
        print(chr(a), end = " ")
        a+=1
    print()