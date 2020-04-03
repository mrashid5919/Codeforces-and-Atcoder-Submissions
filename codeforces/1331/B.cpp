#include<stdio.h>
int main()
{
    int a,i,b,c;
    scanf("%d",&a);
    for(i=2;;i++)
    {
        if(a%i==0)
        {
            b=i;
            c=a/i;
            break;
        }
        else
        {
            continue;
        }
    }
    printf("%d%d",b,c);
    return 0;
}
