#include<stdio.h>
int main()
{
    long long int s1,s2,s3,s4;
    scanf("%lld%lld%lld%lld",&s1,&s2,&s3,&s4);
    if(s1==s2 && s2==s3 && s3==s4)
        printf("3");
    else if((s1==s2 && s2==s3 && s1!=s4) || (s1==s2 && s2==s4 && s1!=s3) || (s1==s3 && s3==s4 && s1!=s2) || (s2==s3 && s3==s4 && s1!=s2) || (s1==s2 && s3==s4) || (s1==s3 && s2==s4) || (s1==s4 && s2==s3))
        printf("2");
    else if((s1==s2 && s2!=s3 && s3!=s4 && s2!=s4) || (s1==s3 && s3!=s2 && s2!=s4 & s3!=s4) || (s1==s4 && s4!=s2 && s2!=s3 && s4!=s3) || (s2==s3 && s3!=s1 && s1!=s4 && s3!=s4) || (s2==s4 && s4!=s1 && s1!=s3 && s4!=s3) || (s3==s4 && s4!=s1 && s1!=s2 && s4!=s2))
        printf("1");
    else
        printf("0");
    return 0;
}
