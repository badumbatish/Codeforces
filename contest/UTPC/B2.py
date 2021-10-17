n = int(input())



sum = 0
count_r = 0
while(n):
    query_type = input()
    if(len(query_type) > 1):
        data = int(query_type[2:])
        sum +=data
        count_r+=1
    else:
        print(sum/count_r)
    n=n-1

