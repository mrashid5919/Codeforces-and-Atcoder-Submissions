#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,x,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        a=(k*(k+1))/2;
        b=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(x>=a && x<=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}