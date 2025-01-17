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
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<1<<" ";
        for(i=1;i<=n/2;i++)
        {
            cout<<i<<" ";
        }
        for(i=n/2+1;i<n;i++)
        {
            cout<<i-n/2<<" ";
        }
        cout<<"\n";
    }
    return 0;
}