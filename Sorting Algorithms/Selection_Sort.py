n = int(input("Enter the number of elements in the list: "))
arr = []
for i in range (n):
    arr.append(int(input("Enter the element: ")))
    
for i in range(n):
    small = i
    for j in range(i+1, n):
        if(arr[j] < arr[small]):
            small = j
    arr[i], arr[small] = arr[small], arr[i]     
    
print("The sorted list is: ")
for i in range(n):
    print(arr[i], end = " ")