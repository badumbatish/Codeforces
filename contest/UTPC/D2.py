from math import ceil
n, k = list(int(x) for x in input().split())

lst = list(int(x) for x in input().split())

sum = sum(lst)

if(sum/k >= max(lst)):
    print(ceil(sum/k))
else:
    print(max(lst))