a=[int(i) for i in input().split()]
for i in a:
        num=a[0];
        b=a[1];
num=num>>(b)
if((num&1)!=0):
    print("true")
else:
    print("false")
