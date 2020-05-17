#include<stdio.h>
#include<math.h>
int main()
{
    int t,n;
    float s,y,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        y=(float)(n);
        b=(float)tan(3.141592654/(2*y));
        s=((2*y)/(4*b))/(0.5*y);
        printf("%f\n",s);
    }
    return 0;
}
