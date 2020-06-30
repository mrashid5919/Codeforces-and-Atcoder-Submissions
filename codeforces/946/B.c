#include<stdio.h>
int main()
{
    unsigned long long int n,m,i;
    scanf("%llu%llu",&n,&m);
    for(i=0;;i++)
    {
        if(n==0||m==0)
            break;
        else if(n>=2*m)
            n=n%(2*m);
        else if(m>=2*n)
            m=m%(2*n);
        else
            break;
        //printf("%llu %llu\n",n,m);
    }
    printf("%llu %llu\n",n,m);
    return 0;
}
