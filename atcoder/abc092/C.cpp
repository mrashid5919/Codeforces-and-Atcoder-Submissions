#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100010],dif[100010];

int main()
{
    fastio;
    long long n,i,sum=0;
    cin>>n;
    ara[0]=0;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    ara[n+1]=0;
    for(i=1;i<=n+1;i++)
        dif[i-1]=abs(ara[i]-ara[i-1]);
    for(i=0;i<=n;i++)
        sum+=dif[i];
    for(i=0;i<n;i++)
        cout<<sum-dif[i]-dif[i+1]+abs(ara[i]-ara[i+2])<<"\n";
}