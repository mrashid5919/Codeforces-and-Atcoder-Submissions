#include<stdio.h>
int main()
{
    int t,n,ara[55],i,j,c,even,odd;
    scanf("%d",&t);
    while(t--)
    {
        even=0;
        odd=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]%2==0)
                even=even+1;
            else
                odd=odd+1;
        }
        if((even%2)!=(odd%2))
            printf("NO\n");
        else
        {
            if(even%2==0 && odd%2==0)
                printf("YES\n");
            else
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=0;j<n-i-1;j++)
                    {
                        if(ara[j]>ara[j+1])
                        {
                            c=ara[j];
                            ara[j]=ara[j+1];
                            ara[j+1]=c;
                        }
                    }
                }
                c=0;
                for(i=0;i<n;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if((ara[i]%2!=ara[j]%2)&& (ara[j]-ara[i]==1))
                        {
                            c=1;
                            break;
                        }

                    }
                }
                if(c==1)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}
