#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,mx,mn;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        mx=max(a,b);
        mn=min(a,b);
        if(mx-mn<=1)
            cout<<mx+mn<<"\n";
        else
            cout<<2*mn+1+(mx-mn-1)*2<<"\n";
    }
    return 0;
}
