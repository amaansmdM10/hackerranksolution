n=int(input())
a=0
b=1
count=0
while count < n:
        d = a + b
       # update values
        a = b
        b = d
        count += 1
print(a)
