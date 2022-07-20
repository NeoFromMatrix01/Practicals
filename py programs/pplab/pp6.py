s = input("Enter the string : ")
ss = input("Enter the sub-string : ")
i = s.find(ss)

if i >= 0:
    print("Sub-string found at index ",i)
else:
    print("Sub-string not found.")