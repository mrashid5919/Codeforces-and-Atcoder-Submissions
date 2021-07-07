#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,x,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<" "<<0<<"\n";
            continue;
        }
        x=min(a,b);
        d=max(a,b)-min(a,b);
        //y=x/d;
        cout<<d<<" "<<min(x%d,d-(x%d))<<"\n";
    }
    return 0;
}
