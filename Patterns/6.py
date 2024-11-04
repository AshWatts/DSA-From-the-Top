'''
n=3:
1
2 2
3 3 3
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(i+1):
        print(i+1, end = " ")
    print()