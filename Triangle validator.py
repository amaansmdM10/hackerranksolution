l=[int(i) for i in input().split()]
for i in l:
        a=l[0]
        b=l[1]
        c=l[2]
if a+b>=c and b+c>=a and c+a>=b:
    print('Yes')
else:
    print('No')
