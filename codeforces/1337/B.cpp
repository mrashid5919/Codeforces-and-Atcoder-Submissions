#include<stdio.h>
int main()
{
    long int t,x,n,m,i,j,k;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld%ld%ld",&x,&n,&m);
        if(x/10<=m && x%10==0)
        {
            printf("YES\n");
        }
        else if(x/10<m)
        {
            printf("YES\n");
        }
        else
        {
            for(j=0; j<n; j++)
            {
                x=(x/2)+10;
            }
            if(x<=0)
            {
                printf("YES\n");
            }
            else
            {
                for(k=0; k<m; k++)
                {
                    x=x-10;
                }
                if(x<=0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
        }

    }
    return 0;
}
