#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long n,k,i,mn;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    mn=ara[n-1-k]-ara[0];
    for(i=1;i<=k;i++)
        mn=min(mn,ara[n-1-k+i]-ara[i]);
    cout<<mn<<"\n";
    return 0;
}