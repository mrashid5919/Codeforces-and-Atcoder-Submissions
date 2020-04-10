//Hungry Student Problem(Incomplete)
#include<stdio.h>
int main()
{
    int n,i,j,x,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%3==0 || x%7==0)
        {
            printf("YES\n");
        }
        else
        {
            for(j=1;;j++)
            {
                a=3*j;
                b=x-a;
                if(b%7==0)
                {
                    printf("YES\n");
                    break;
                }
                else if(b<=0)
                {
                    printf("NO\n");
                    break;
                }
                else if(j>33)
                {
                    printf("NO\n");
                    break;
                }

            }
        }
    }
    return 0;
}
