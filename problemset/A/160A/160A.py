n = int(input())

lst = list(int(x) for x in input().split())

lst.sort(reverse=True)

sum_lst = sum(lst)

min_coin = 0
sum_coin = 0

for coin in lst:
    if(sum_coin <= sum_lst - sum_coin):
        sum_coin += coin
        min_coin += 1
    else:
        break

print(min_coin)
