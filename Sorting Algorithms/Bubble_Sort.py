n = int(input("Enter the number of elements in the list: "))
arr = []
for i in range (n):
    arr.append(int(input("Enter the element: ")))
    
for i in range(n):
    for j in range(n-i-1):
        if(arr[j] > arr[j+1]):
            arr[j], arr[j+1] = arr[j+1], arr[j]
    
print("The sorted list is: ")
for i in range(n):
    print(arr[i], end = " ")