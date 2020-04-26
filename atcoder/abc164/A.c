#include<stdio.h>
int main()
{
    int s,w;
    scanf("%d%d",&s,&w);
    if(s>w)
        printf("safe\n");
    else
        printf("unsafe\n");
    return 0;
}