def fib(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    
    a = 0
    b = 1
    for i in range(2, n): 
        temp = b
        b = a + b
        a = temp
    return b

print(fib(7))  
