def fact(a):
    p = 1
    for i in range(1,a+1):
        p*=i
    return p

def calculate_nCr(n,r):
    result = (fact(n))/(fact(r)*fact(n-r))
    return result

print(calculate_nCr(8,2))
print(calculate_nCr(6,3))
print(calculate_nCr(8,7))