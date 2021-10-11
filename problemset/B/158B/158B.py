from math import ceil
n = int(input())

lst = list(int(x) for x in input().split())

print(ceil(sum(lst) / 4))
