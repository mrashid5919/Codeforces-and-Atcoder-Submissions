line=input().split()
for i in range(len(line)):
    line[i]=int(line[i])
x1=line[0]
y1=line[1]
x2=line[2]
y2=line[3]
if x1==x2:
    x3=x1+y1-y2
    x4=x3
    y3=y1
    y4=y2
    print(x3,y3,x4,y4)
elif y1==y2:
    y3=y1+x2-x1
    y4=y3
    x3=x1
    x4=x2
    print(x3,y3,x4,y4)
elif (x1-x2)==(y1-y2):
    x3=x1
    x4=x2
    y3=y2
    y4=y1
    print(x3,y3,x4,y4)
elif (x1-x2)==(y2-y1):
    x3=x1
    x4=x2
    y3=y2
    y4=y1
    print(x3,y3,x4,y4)
else:
    print("-1")
