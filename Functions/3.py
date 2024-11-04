def sum_of_digits(n):
    total = 0  
    while n > 0:
        d = n % 10 
        total += d  
        n = n // 10 
    return total

print(sum_of_digits(14347))  
print(sum_of_digits(1447))
print(sum_of_digits(1213))   