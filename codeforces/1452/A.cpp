#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y)
            cout<<x+y<<"\n";
        else
        {
            ans=2*(max(x,y)-min(x,y)-1)+2*min(x,y)+1;
            cout<<ans<<"\n";
        }
    }
    return 0;
}
