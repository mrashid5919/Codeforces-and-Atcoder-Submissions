#include<stdio.h>
int main()
{
    int k,a,b,i;
    scanf("%d%d%d",&k,&a,&b);
    for(i=a;;i++)
    {
        if(i>b)
        {
            printf("NG");
            break;
        }
        else if(i%k==0)
        {
            printf("OK");
            break;
        }
    }
    return 0;
}