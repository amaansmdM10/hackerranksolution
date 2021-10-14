def getMissingNo(A):
    n = len(A)
    total = (n + 1)*(n + 2)/2
    sum_of_A = sum(A)
    return total - sum_of_A
 
A=[int(i) for i in input().split()]
miss = getMissingNo(A)
print(int(miss))
