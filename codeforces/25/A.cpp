#include<stdio.h>
int main()
{
    int n,a[101],b[101],i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1; j<=n; j++)
    {
        b[j]=a[j]%2;
    }
    for(j=1;; j++)
    {
        if(j==1)
        {
            if(b[1]!=b[2] && b[1]!=b[3])
            {
                printf("1");
                break;
            }

        }
        else
        {
            if(b[j]!=b[j-1] && b[j]!=b[j+1])
            {
                printf("%d",j);
                break;
            }
        }

    }
    return 0;
}
