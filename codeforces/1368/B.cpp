#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1LL;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long n,ara[20],x,i,j;
    string s="codeforces";
    cin>>n;
    if(n==1)
    {
        cout<<"codeforces"<<"\n";
        return 0;
    }
    for(i=1;;i++)
    {
        x=power(i,10);
        if(n<=x)
        {
            for(j=1;j<=10;j++)
            {
                if(power(i,j)*power(i-1,10-j)>=n)
                {
                    for(int k=0;k<j;k++)
                        ara[k]=i;
                    for(int k=j;k<10;k++)
                        ara[k]=i-1;
                    break;
                }
            }
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<ara[i];j++)
            cout<<s[i];
    }
    return 0;
}
