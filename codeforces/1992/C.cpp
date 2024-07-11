#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    long long t,n,m,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=n;i>=k;i--)
            cout<<i<<" ";
        for(i=k-1;i>m;i--)
            cout<<i<<" ";
        for(i=1;i<=m;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}