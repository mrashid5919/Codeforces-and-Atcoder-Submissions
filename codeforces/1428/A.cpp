#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x1,y1,x2,y2,ans;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2)
            ans=abs(y1-y2);
        else if(y1==y2)
            ans=abs(x1-x2);
        else
            ans=abs(x1-x2)+abs(y1-y2)+2;
        cout<<ans<<"\n";
    }
    return 0;
}
