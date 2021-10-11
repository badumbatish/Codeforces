n = int(input())

count = 0

for i in range(n):
    s = input()
    if(s[0] == '+' or s[-1] == '+'):
        count+=1
    else:
        count-=1

print(count)