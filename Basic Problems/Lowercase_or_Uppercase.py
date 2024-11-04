a = input("Enter a character: ")
# if(a >= 'a' and a <= 'z'):
#     print("Lowercase")
# elif(a >= 'A' and a <= 'Z'):
#     print("Uppercase")
# else:
#     print("Invalid")
    
a = ord(a)

if(a >= 97 and a <= 122):
    print("Lowercase")
elif(a >= 65 and a <= 90):
    print("Uppercase")
else:
    print("Invalid")