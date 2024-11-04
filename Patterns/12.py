'''
n=3:
A
B C
D E F
'''

n = int(input("Enter a number: "))
a = 65
for i in range(n):
    for j in range(i+1):
        print(chr(a), end = " ")
        a+=1
    print()
        