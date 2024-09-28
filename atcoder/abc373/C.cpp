#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[500005],b[500005];

int main()
{
    fastio;
    long long n,i,mx1,mx2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i==0)
            mx1=ara[i];
        else
            mx1=max(mx1,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        if(i==0)
            mx2=b[i];
        else
            mx2=max(mx2,b[i]);
    }
    cout<<mx1+mx2<<"\n";
    return 0;
}