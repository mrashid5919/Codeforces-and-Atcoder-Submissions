#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<(b/a)*b<<"\n";
        else
            cout<<(a*b)/__gcd(a,b)<<"\n";
    }
    return 0;
}