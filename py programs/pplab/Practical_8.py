s = input("Enter the string : ")
list1 = s.split(" ")
count = {}

for i in list1:
    if i in count.keys():
        count[i] += 1 
    else:
        count[i] = 1

print(count)