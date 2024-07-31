l=list(map(int, input().split()))
k=int(input())
l.sort()
def pairsum(l,k):
    s=0
    e=len(l)-1
    while s<e:
        if l[s]+l[e]==k:
            return s,e
        elif l[s]+l[e]<k:
            s+=1
        else:
            e-=1
    return -1
print(pairsum(l,k))
