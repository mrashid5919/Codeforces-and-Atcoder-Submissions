#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,h,i,ara[1005],x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        x=ara[0];
        y=ara[1];
        ans=h/(x+y);
        ans*=2;
        if(h%(x+y)==0)
            ans*=1;
        else if(h%(x+y)<=x)
            ans++;
        else
            ans+=2;
        cout<<ans<<"\n";
    }
    return 0;
}
