#include<stdio.h>
int main()
{
    int n,d,c=0,nj=0,lj,ara[101],i,count=1,p=0;
    char s[103];
    scanf("%d%d",&n,&d);
    scanf("%s",&s);
    ara[0]=0;
    for(i=1;i<n;i++)
    {
        if(s[i]=='1')
        {
            ara[count]=i;
            count++;
        }
    }
    while(c<count-1)
    {
        lj=c;
        while(c<count-1 && ara[c+1]-ara[lj]<=d)
        {
            c++;
        }
        if(c==lj)
        {
            printf("-1");
            p=1;
            break;
        }
        else
            nj=nj+1;
    }
    if(p==0)
        printf("%d",nj);
    return 0;
}
