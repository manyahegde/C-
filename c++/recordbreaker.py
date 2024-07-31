l=list(map(int, input().split()))
l1=[]
for i in range(2,len(l)):
    if l[i-2]<l[i-1]>l[i]:
        l1.append(l[i-1])
if l[-2]<l[-1]:
    l1.append(l[-1]) 
print(l1)
