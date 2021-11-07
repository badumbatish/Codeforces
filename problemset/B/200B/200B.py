n = float(input())

lst = list(float(int(x) / 100) for x in input().split())

sum_lst = sum(lst)

print((sum_lst / n) * 100)
