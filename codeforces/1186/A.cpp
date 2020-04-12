#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(m>=n && k>=n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
