list1 = ['v','a','i','b','h','a','v']
ch = input("Enter the character you want to remove : ")
pos = int(input("Enter the position : "))
count = 0
new = []
for a in list1:
    if(a == ch):
        count += 1
        if(count != pos):
            new.append(a)
    else:
        new.append(a)
    
print(new)