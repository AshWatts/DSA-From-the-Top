'''
n=3:
1
1 2
1 2 3
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i+1):
        print(j+1, end = " ")
    print()