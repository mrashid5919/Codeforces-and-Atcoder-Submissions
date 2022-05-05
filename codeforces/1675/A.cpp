#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        if(x>(a+c) || y>(b+c))
        {
            cout<<"NO\n";
            continue;
        }
        if(x>a)
        {
            c-=x-a;
        }
        if(y>b+c)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
