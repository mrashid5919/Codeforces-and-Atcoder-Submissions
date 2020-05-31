#include<stdio.h>
int main()
{
    int t,n,x,a[1001],odd,even,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        odd=0;
        even=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        for(i=1;; i=i+2)
        {
            if(i>x)
            {
                printf("No\n");
                break;
            }
            else if((odd>=i)&&(even>=(x-i)))
            {
                printf("Yes\n");
                break;
            }
        }
    }
    return 0;
}
