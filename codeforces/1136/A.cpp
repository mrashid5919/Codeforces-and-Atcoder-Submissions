#include<stdio.h>
int main()
{
    int n,l[100],r[100],k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&l[i],&r[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {

        if(k>=l[i] && k<=r[i])
        {
            printf("%d",n-i);
            break;
        }
    }
    return 0;
}
