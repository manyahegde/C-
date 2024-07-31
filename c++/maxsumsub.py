l=list(map(int, input().split()))
cursum=0
maxsum=0
for i in l:
    cursum+=i
    if cursum<0:
        cursum=0
    maxsum=max(cursum, maxsum)
print(maxsum)