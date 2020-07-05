#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a=0,w=0,t=0,r=0;
    char ara[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&ara);
        if(ara[0]=='A')
            a++;
        else if(ara[0]=='W')
            w++;
        else if(ara[0]=='T')
            t++;
        else
            r++;
    }
    printf("AC x %d\n",a);
    printf("WA x %d\n",w);
    printf("TLE x %d\n",t);
    printf("RE x %d\n",r);
    return 0;
}
