#include<stdio.h>
int main()
{
    int t,n,a[45],i,odd,even;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        odd=0;
        even=0;
        for(i=0;i<n;i++)
        {
            if(i%2!=a[i]%2)
            {
                if(i%2==0)
                    even++;
                else
                    odd++;
            }
        }
        if(even==odd)
            printf("%d\n",even);
        else
            printf("-1\n");
    }
    return 0;
}
