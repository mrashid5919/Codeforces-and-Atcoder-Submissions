line=input().split()
for i in range(len(line)):
    line[i]=int(line[i])
n=line[0]
k=line[1]
n=int(n)
k=int(k)
s=input()
counts=dict()
for i in s:
    counts[i]=counts.get(i,0)+1
lst=list()
for (p,v) in counts.items():
    lst.append(v)
lst=sorted(lst, reverse=True)
c=0
j=0
sum=0
while(c<k):
    if(k-c>=lst[j]):
        sum=sum+lst[j]*lst[j]
        c=c+lst[j]
    else:
        sum=sum+(k-c)*(k-c)
        c=k
    j=j+1
print(sum)
