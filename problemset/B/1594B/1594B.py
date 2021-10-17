from math import ceil, floor
from sys import stdin, stdout

dct = {}

def recur_expo_mod(a, n, k):
    if n==0:
        return 1
    if n==1:
        return a%k
    else:
        x = 0
        y = 0
        if(ceil(n/2) in dct):
            x = dct[ceil(n/2)]
        else:
            x = recur_expo_mod(a, ceil(n/2), k) % k
            dct[ceil(n/2)] = x

        if(floor(n/2) in dct):
            y = dct[floor(n/2)]
        else:
            y = recur_expo_mod(a, floor(n/2), k) % k
            dct[floor(n/2)] = y


        return (x * y) % k

def recur_add_mod(a, b, k):
    return ((a%k + b%k) % k)


def main():
    t = int(input())
    moduler = 10**9 + 7
    for i in range(t):
        sum = 0
        n, k = list(int(x) for x in input().split())

    
        lst = []
        while(k > 0):
            lst.append(k%2)
            k = int(k / 2)

        
        for index in range(len(lst)):
            if(lst[index]==1):
                sum = recur_add_mod(sum, recur_expo_mod(n,index,moduler), moduler)
                dct.clear()
        
        stdout.write(str(sum)+"\n")

main()
