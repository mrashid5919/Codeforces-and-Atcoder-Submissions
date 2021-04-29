#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    unsigned long long t,r,b,d,x,y;
    cin>>t;
    while(t--)
    {
        cin>>r>>b>>d;
        x=min(r,b);
        y=max(r,b);
        if(x+x*d>=y)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
