l1=list(map(int, input().split()))
l2=[]
for i in range(len(l1)):
    l2.append(max(l1[:i+1]))
print(l2)    