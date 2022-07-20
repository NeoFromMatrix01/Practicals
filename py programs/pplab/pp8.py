from re import L


s = input('Enter the string : ')
l1 = s.split(" ")
count = {}

for i in l1:
    if i in count.keys():
        count[i] += 1
    else:
        count[i] = 1

print(count)