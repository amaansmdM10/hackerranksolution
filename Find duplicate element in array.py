a=int(input())
d=[int(i) for i in input().split()]
k=[]
for i in range(len(d)):
    for j in range(len(d)):
        if(i!=j):
            if(d[i]==d[j]):
                 k.append(d[i])
s=set(k)
k=list(s)
for i in range(len(k)):
     print(k[i])
                
