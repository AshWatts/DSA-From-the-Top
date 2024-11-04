def sum_upto_n(n):
    sum = 0
    for i in range(n+1):
        sum+=i
    return sum

def product_upto_n(n):
    p = 1
    for i in range(1,n+1):
        p*=i
    return p

print(sum_upto_n(10))
print(sum_upto_n(100))
print(product_upto_n(5))
print(product_upto_n(10))