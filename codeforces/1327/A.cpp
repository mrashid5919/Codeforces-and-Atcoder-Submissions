#include<stdio.h>
#include<math.h>
int main()
{
    long int t,n,k,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&n,&k);
        if(n<k)
            printf("NO\n");
        else if(n%2!=k%2)
            printf("NO\n");
        else if(k<=sqrt(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
