'''
n=3:
1
2 3
4 5 6
'''

n = int(input("Enter a number: "))
a = 1
for i in range(n):
    for j in range(i+1):
        print(a, end = " ")
        a+=1
    print()