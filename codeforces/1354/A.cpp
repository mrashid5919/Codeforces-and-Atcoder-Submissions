#include<stdio.h>
int main()
{
    unsigned long long int t,a,b,c,d,i,j,sum=0;
    scanf("%llu",&t);
    for(j=0;j<t;j++)
    {
        scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
        if(b>=a)
            printf("%llu\n",b);
        else if(c<=d)
            printf("-1\n");
        else
        {
            if((a-b)%(c-d)==0)
                sum=b+((a-b)/(c-d))*c;
            else
                sum=b+((a-b)/(c-d)+1)*c;
            printf("%llu\n",sum);
        }

        sum=0;
    }
    return 0;
}
