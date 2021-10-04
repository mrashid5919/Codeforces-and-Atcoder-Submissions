#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x,y,d,ans;
    cin>>t;
    while(t--)
    {
        ans=INT_MAX;
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0)
        {
            cout<<abs(x-y)/d<<"\n";
            continue;
        }
        if(abs(y-n)%d==0)
            ans=1+abs(x-n)/d+abs(y-n)/d;
        if(abs(y-1)%d==0)
            ans=min(ans,1+abs(x-1)/d+abs(y-1)/d);
        if(ans==INT_MAX)
            cout<<-1<<"\n";
        else
            cout<<ans<<"\n";
        /*if(x<=y)
        {
            if((y-x)%d==0)
            {
                cout<<(y-x)/d<<"\n";
                continue;
            }
            if(y==n)
            {
                cout<<1+(y-x)/d<<"\n";
                continue;
            }
            if((y-1)%d!=0)
            {
                cout<<-1<<"\n";
                continue;
            }
            ans=1+(x-1)/d+(y-1)/d;
            cout<<ans<<"\n";
        }
        else
        {
            if((x-y)%d==0)
            {
                cout<<(x-y)/d<<"\n";
                continue;
            }
            if((n-y)%d!=0)
            {
                cout<<-1<<"\n";
                continue;
            }
            ans=1+(n-x)/d+(n-y)/d;
            cout<<ans<<"\n";
        }*/
    }
    return 0;
}
