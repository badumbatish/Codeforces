from math import ceil, floor
n = int(input())

lst = list(int(x) for x in input().split())

count_lst = list(lst.count(x) for x in range(1,5))

sum = count_lst[-1]

sum += int(count_lst[1]/2)
count_lst[1] %= 2

if(count_lst[2] > count_lst[0]):
    sum += count_lst[0]
    sum += (count_lst[2] - count_lst[0])
    sum += count_lst[1]

elif(count_lst[2]==count_lst[0]):
    sum += count_lst[0]
    sum += count_lst[1]
else:
    sum += count_lst[2]
    count_lst[0] -= count_lst[2]
    if(count_lst[0]% 4 > 2):
        sum += ceil(count_lst[0]/4)
        sum += count_lst[1]
    elif(count_lst[0]%4 <= 2):
        sum += ceil(count_lst[0]/4)
        
    
print(sum)


