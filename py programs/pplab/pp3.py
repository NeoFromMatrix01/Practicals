def intersection(list1,list2):
    list3 = [a for a in list1 if a in list2]
    return list3

l1 = [1,2,3,4]
l2 = [3,4,5]

print(intersection(l1,l2))
