#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],w[100005],cnt[100005],mx[100005],tot[100005];

int main()
{
    fastio;
    long long n,i,j,mn=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        cnt[ara[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>w[i];
        tot[ara[i]]+=w[i];
        mx[ara[i]]=max(mx[ara[i]],w[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(cnt[i]>1)
        {
            mn+=tot[i]-mx[i];
        }
    }
    cout<<mn<<"\n";
    return 0;
}