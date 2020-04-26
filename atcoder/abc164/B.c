#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=1;;i++)
    {
        c=c-b;
        a=a-d;
        if(a<=0 && c<=0)
        {
            printf("Yes");
            break;
        }
        else if(c<=0)
        {
            printf("Yes");
            break;
        }
        else if(a<=0)
        {
            printf("No");
            break;
        }
    }
    return 0;
}
