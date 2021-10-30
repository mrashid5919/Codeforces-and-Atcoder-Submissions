#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
            cout<<x+y<<"\n";
        else if(x==y)
            cout<<x<<"\n";
        else if(y%x==0)
            cout<<y<<"\n";
        else
            cout<<(y/x)*x+(y%x)/2<<"\n";
    }
    return 0;
}
