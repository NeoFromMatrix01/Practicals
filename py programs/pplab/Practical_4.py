list = []
size = int(input("Enter the size of list: "))
print("Enter the elements of list: ")
while size:
    a = input()
    list.append(a)
    size -= 1

ele = input("Enter the word to remove: ")
n = int(input("Enter the occurence number: "))
count = 0
list2 = []
for i in list:
    if i == ele:
        count += 1
        if count != n:
            list2.append(i)
    else:
        list2.append(i)

print(list2)
