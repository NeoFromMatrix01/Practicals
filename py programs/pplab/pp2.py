list1 = [1,2,3,4]
list2 = [5,6,4,7,8]

ans = list(set(list1).union(list2))
print(ans)

ans2 = list(set(list1 + list2))
print(ans2)