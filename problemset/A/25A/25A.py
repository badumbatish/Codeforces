n = int(input())

lst = list(int(x) for x in input().split())

lst = list(x % 2 for x in lst)

x = lst.count(0)
y = lst.count(1)

if(x>y):
    print(lst.index(1)+1)
else:
    print(lst.index(0)+1)