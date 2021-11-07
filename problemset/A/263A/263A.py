lst = []
for i in range(5):
    lst.append(list(int(x) for x in input().split()))

x = 0
y = 0
for i in range(5):
    if(1 in lst[i]):
        x = i+1
        y = lst[i].index(1) + 1
        break

print(abs(3-x) + abs(3-y))
