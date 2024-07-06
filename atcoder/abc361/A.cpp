#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,k,x,i,ara[200];
    cin>>n>>k>>x;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
        if(i==k)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}