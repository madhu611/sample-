def getMissingNO(a):
    n=len(a)
    total = (n+1)*(n+2)/2
    sum_of_a=sum(a)
    return total - sum_of_a

a=[1,2,4,6,3,7,8]
missingno=getMissingNO(a)
print(missingno)