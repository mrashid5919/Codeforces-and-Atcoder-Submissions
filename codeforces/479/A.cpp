#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    e=a*b*c;
    f=a*(b+c);
    g=a+(b*c);
    h=(a+b)*c;
    if(d>=e && d>=f && d>=g && d>=h)
        printf("%d",d);
    else if(e>=d && e>=f && e>=g && e>=h)
        printf("%d",e);
    else if(f>=d && f>=e && f>=g && f>=h)
        printf("%d",f);
    else if(g>=d && g>=e && g>=f && g>=h)
        printf("%d",g);
    else
        printf("%d",h);
    return 0;
}
