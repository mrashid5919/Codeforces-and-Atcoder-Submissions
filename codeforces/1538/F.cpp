#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u=u*x;
    return u;
}

int main()
{
    fastio;
    long long t,i,l,r,dif,x,y,ans;
    cin>>t;
    while(t--)
    {
        x=0;
        y=0;
        ans=0;
        cin>>l>>r;
        ans=r-l;
        for(i=1;i<=9;i++)
        {
            ans+=(r/power(10,i)-l/power(10,i));
        }
        cout<<ans<<"\n";
    }
    return 0;
}
