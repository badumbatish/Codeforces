n = int(input())

sum = 0

while(n):
    query_type = input()
    if(len(query_type) > 1):
        data = int(query_type[2:])
        sum +=data
    else:
        print(sum)
    n=n-1

