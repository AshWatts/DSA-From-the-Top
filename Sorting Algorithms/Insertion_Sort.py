n = int(input("Enter the number of elements in the list: "))
arr = []
for i in range (n):
    arr.append(int(input("Enter the element: ")))
    
for i in range(1, n):
    curr = arr[i]
    prev = i-1
    
    while(prev >=0 and arr[prev] > curr):
        arr[prev + 1] = arr[prev]
        prev = prev-1
        
    arr[prev+1] = curr
    
print("The sorted list is: ")
for i in range(n):
    print(arr[i], end = " ")