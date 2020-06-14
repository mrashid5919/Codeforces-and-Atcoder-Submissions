#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((y-2*x)%2==0 && (4*x-y)%2==0)
    {
        if((y-2*x)/2>=0 && (4*x-y)/2>=0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    else
        printf("No\n");
    return 0;
}
