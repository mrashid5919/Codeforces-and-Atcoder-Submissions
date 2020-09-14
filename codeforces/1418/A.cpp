#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x,y,k,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k;
        if((k*(y+1)-1)%(x-1)==0)
            n=(k*(y+1)-1)/(x-1);
        else
            n=1+(k*(y+1)-1)/(x-1);
        ans=n+k;
        cout<<ans<<"\n";
    }
    return 0;
}
