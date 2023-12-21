#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    if(k==0)
    {
        if(ara[0]==1)
            cout<<-1<<"\n";
        else
            cout<<1<<"\n";
    }
    else if(k==n)
    {
        cout<<ara[n-1]<<"\n";
    }
    else
    {
        if(ara[k]==ara[k-1])
            cout<<-1<<"\n";
        else
            cout<<ara[k-1]<<"\n";
    }
    return 0;
}