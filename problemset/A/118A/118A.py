s = input()
s = s.lower()
ans = ""

vowel_list = ['a','e', 'i', 'o', 'u', 'y']
for i in s:
    if(not(i in vowel_list)):
        ans+="."
        ans+=str(i)
    

print(ans)