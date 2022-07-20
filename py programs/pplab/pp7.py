from re import A


l1 = ["Name", "Class","Branch"]
l2 = ["Vaibhav","SE","CSE"]

ans1 = dict(zip(l1,l2))
print(ans1)

ans2 = {l1[i]:l2[i] for i in range(len(l1))}
print(ans2)