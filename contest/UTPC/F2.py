n = int(input())

lst = []
while(n):
    mini_lst = list(int(x) for x in input().split())
    lst.append(mini_lst)
    n-=1

lst.sort()

for mini_lst in lst:
    pass