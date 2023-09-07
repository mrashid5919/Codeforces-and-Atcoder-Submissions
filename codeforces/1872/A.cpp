#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,a,b,c,x,y,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=min(a,b);
        y=max(a,b);
        m=(x+y)/2+(x+y)%2;
        if((m-x)%c==0)
            cout<<(m-x)/c<<"\n";
        else
            cout<<1+(m-x)/c<<"\n";
    }
    return 0;
}