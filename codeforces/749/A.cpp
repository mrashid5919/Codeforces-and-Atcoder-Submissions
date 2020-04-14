#include<stdio.h>
int main()
{
    long int n,k,arr[100000],sum=0,i;
    scanf("%ld",&n);
    for(k=1;;k++)
    {

        if(n-sum>3 || n-sum==2)
        {
            arr[k]=2;
            sum=sum+2;
        }
        else if(n-sum==3)
        {
            arr[k]=3;
            sum=sum+3;
        }
        else if(n-sum==0)
            break;

    }
    i=k-1;
    printf("%ld\n",i);
    for(k=1;k<=i;k++)
    {
        printf("%ld ",arr[k]);
    }
    return 0;
}
