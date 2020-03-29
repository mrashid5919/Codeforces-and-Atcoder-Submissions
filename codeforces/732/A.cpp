#include<stdio.h>

int main()
{
    int k,r,i,sum;
    scanf("%d%d",&k,&r);
    sum=k;
    if(sum%10==0)
    {
        printf("1");
    }
    else
    {
        for(i=1;sum%10!=r;i++)
    {
        sum=sum+k;
        if(sum%10==0)
        {
            i++;
            break;
        }

        else
            continue;
    }
    printf("%d",i);
    }

    return 0;
}
