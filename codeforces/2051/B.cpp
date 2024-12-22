#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,a,b,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        ans=3*(n/(a+b+c));
        if(n%(a+b+c)!=0)
        {
            if(n%(a+b+c)<=a)
            {
                ans++;
            }
            else if(n%(a+b+c)<=a+b)
            {
                ans+=2;
            }
            else
            {
                ans+=3;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}