line=input().split()
for i in range(len(line)):
    line[i]=int(line[i])
n=line[0]
k=line[1]
while k>0:
    if n%10==0:
        n=n/10
    else:
        n=n-1
    k=k-1
n=int(n)
print(n)
