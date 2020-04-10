#include<stdio.h>
int main()
{
    int y,z,a,b,c,d,i;
    scanf("%d",&y);
    z=y+1;
    a=z/1000;
    b=(z%1000)/100;
    c=((z%1000)%100)/10;
    d=((z%1000)%100)%10;

    while(a==b || b==c || c==d || a==c || a==d || b==d)
    {
        ++z;
        a=z/1000;
        b=(z%1000)/100;
        c=((z%1000)%100)/10;
        d=((z%1000)%100)%10;
    }
    printf("%d",z);
    return 0;
}
