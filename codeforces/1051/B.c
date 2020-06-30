#include<stdio.h>
int main()
{
    unsigned long long int a,b,i;
    scanf("%llu%llu",&a,&b);
    printf("YES\n");
    for(i=0;i<(b-a+1)/2;i++)
        printf("%llu %llu\n",a+2*i,a+2*i+1);
    return 0;
}
