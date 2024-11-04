'''
n=4:
A B C D
A B C D
A B C D
'''

n = int(input("Enter a number: "))
for i in range(n):
    for j in range(n):
        print(chr(65+j), end=" ")
    print()
    
