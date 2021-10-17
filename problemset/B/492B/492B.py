n, k = (int(x) for x in input().split())
mini_lst = list(int(x) for x in input().split())

mini_lst.sort()
lst = mini_lst

# print(lst)

mx = max(lst[0],k-lst[-1])
if len(lst) == 1:
    pass
else:
    for i in range(0,len(lst)):
        if(i == 0):
            mx = max(mx,max(lst[i]-0,(lst[i+1]-lst[i])/2))
        elif(i==len(lst)-1):
            mx = max(mx,max(k-lst[i], (lst[i]-lst[i-1])/2))
        else:
            mx = max(mx,max((lst[i]-lst[i-1])/2,(lst[i+1]-lst[i])/2))

print(mx)