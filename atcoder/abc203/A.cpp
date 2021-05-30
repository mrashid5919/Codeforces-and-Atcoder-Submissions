#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b)
        cout<<c<<"\n";
    else if(a==c)
        cout<<b<<"\n";
    else if(b==c)
        cout<<a<<"\n";
    else
        cout<<0<<"\n";
    return 0;
}
