#include<stdio.h>
int main()
{
    int t,n,a[2001],even[2001],odd[2001],i,ev=0,od=0;
    scanf("%d",&t);
    while(t--)
    {
        ev=0;
        od=0;
        scanf("%d",&n);
        for(i=1;i<=2*n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=2*n;i++)
        {
            if(a[i]%2==0)
            {
                even[ev]=i;
                ev++;
            }
            else
            {
                odd[od]=i;
                od++;
            }
        }
        if((ev%2==0)&&(od%2==0))
        {
            if(ev==0)
            {
                for(i=0;i<od-2;i++)
                {
                    printf("%d %d\n",odd[i],odd[i+1]);
                    i++;
                }
            }
            else
            {
                for(i=0; i<ev-2; i++)
                {
                    printf("%d %d\n",even[i],even[i+1]);
                    i++;
                }
                for(i=0; i<od; i++)
                {
                    printf("%d %d\n",odd[i],odd[i+1]);
                    i++;
                }
            }
        }
        else
        {
            if(ev==1)
            {
                for(i=0; i<od-1; i++)
                {
                    printf("%d %d\n",odd[i],odd[i+1]);
                    i++;
                }
            }
            else if(od==1)
            {
                for(i=0; i<ev-1; i++)
                {
                    printf("%d %d\n",even[i],even[i+1]);
                    i++;
                }
            }
            else
            {
                for(i=0; i<ev-1; i++)
                {
                    printf("%d %d\n",even[i],even[i+1]);
                    i++;
                }
                for(i=0; i<od-1; i++)
                {
                    printf("%d %d\n",odd[i],odd[i+1]);
                    i++;
                }
            }
        }
    }
    return 0;
}
