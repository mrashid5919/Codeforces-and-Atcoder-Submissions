#include<stdio.h>
int main()
{
    int n,p,q,count=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        if(p<=q-2)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
