#include<stdio.h>
int main()
{
    int n,m,d,i;
    scanf("%d%d",&n,&m);
    if(n%2==0)
        d=n/2;
    else
        d=n/2+1;
    for(i=d;;i++)
    {
        if(i>n)
        {
            printf("-1\n");
            break;
        }
        else if(i%m==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
