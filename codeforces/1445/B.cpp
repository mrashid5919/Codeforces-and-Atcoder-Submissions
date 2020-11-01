#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a+b>=c+d)
            cout<<a+b<<"\n";
        else
            cout<<c+d<<"\n";
    }
    return 0;
}
