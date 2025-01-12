#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

int main()
{
    fastio;
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if(abs(a-b)%2==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}