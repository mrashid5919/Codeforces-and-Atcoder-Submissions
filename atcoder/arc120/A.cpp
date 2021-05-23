#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],m[200005],ps[200005];

int main()
{
    fastio;
    long long n,i,mx=INT_MIN,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        if(i==1)
            ps[i]=ara[i];
        else
            ps[i]=ps[i-1]+ara[i];
        mx=max(mx,ara[i]);
        m[i]=mx;
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
            sum=2*ara[i];
        else
            sum=sum+ps[i]+i*m[i]-(i-1)*m[i-1];
        cout<<sum<<"\n";
    }
    return 0;
}
