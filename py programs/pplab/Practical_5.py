s = input("Enter the sentence: ")

l1 = s.split(" ")
word = input("Enter the word to count: ")
count = 0

for i in l1:
    if i == word:
        count += 1

print(count)
