import sys
sys.setrecursionlimit(15000)

lst = list(int(x) for x in input().split())

mini_lst = lst[1:]
mini_lst.sort()

lst = [lst[0]] + mini_lst
dp = [0]*(lst[0]+1)

for i in range(0, lst[0]+1):
    # print(i)
    mini_lst = list(i-x for x in lst[1:])
    for j in range(0, 3):
        if(mini_lst[j] < 0):
            mini_lst[j] = 0
    # print(mini_lst)

    mini_lst = list(dp[x] for x in mini_lst)

    if(sum(mini_lst) == 0 and i not in lst[1:]):
        dp[i] = 0
    else:
        dp[i] = max(mini_lst)+1
    # print(dp[i])

print(dp[lst[0]])
