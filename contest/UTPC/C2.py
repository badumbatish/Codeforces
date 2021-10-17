n = int(input())

lst = [0]*n

pos = 1
for i in range(1,n+1):
    lst[pos-1] = 1
    pos = pos + i
    pos = pos % (n)
    if(pos == 0):
        pos = n
    
    
    

if(sum(lst) < n):
    print("NO")
else:
    print("YES")
