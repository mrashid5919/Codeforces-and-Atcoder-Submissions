#include<stdio.h>
int main()
{
    int n,i,j,k,ara[10005],s;
    scanf("%d",&n);
    for(i=1;i<=10000;i++)
        ara[i]=0;
    for(i=1;i<100;i++)
    {
        for(j=1;j<100;j++)
        {
            for(k=1;k<100;k++)
            {
                s=i*i+j*j+k*k+i*j+j*k+k*i;
                if(s<=10000)
                    ara[s]++;
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%d\n",ara[i]);
    return 0;
}