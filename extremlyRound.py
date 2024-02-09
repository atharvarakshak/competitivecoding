def help(x):
    s = str(x)
    cnt=0
    for x in s:
        if x!='0':
            cnt+=1
    return cnt == 1

a=[]
for i in range(1,1000000):
    if help(i):
        a.append(i)

t = int(input())

for i in range(t):
    n = int(input())
    ans = 0
    for x in a:
        if x<=n:
            ans+=1

    print(ans)