#include<stdio.h>
int main()
{
    int m,d,w,ans;
    scanf("%d%d",&m,&d);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        w=(d+30)%7;
        if(w==0)
            ans=(d+30)/7;
        else
            ans=(d+30)/7+1;
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        w=(d+29)%7;
        if(w==0)
            ans=(d+29)/7;
        else
            ans=(d+29)/7+1;
    }
    else
    {
        w=(d+27)%7;
        if(w==0)
            ans=(d+27)/7;
        else
            ans=(d+27)/7+1;
    }
    printf("%d",ans);
    return 0;
}
