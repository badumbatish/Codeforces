n = int(input())

lowest = 10**5

lst = [-1]

while(n):
    x = int(input())

    lst.append(x)
    lst.sort()
    if(x < lowest):
        lowest = x
        print(-1)
    else:
        print(lst[lst.index(x)-1])
    n-=1
