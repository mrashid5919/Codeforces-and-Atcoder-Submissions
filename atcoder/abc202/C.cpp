#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[100005],b[100005],c[100005],d[100005],c1[100005],c2[100005];

int main()
{
    fastio;
    long long n,i,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cin>>b[i];
    for(i=1;i<=n;i++)
        cin>>c[i];
    for(i=1;i<=n;i++)
        d[i]=b[c[i]];
    for(i=1;i<=n;i++)
    {
        c1[a[i]]++;
        c2[d[i]]++;
    }
    for(i=1;i<=n;i++)
        ans+=c1[i]*c2[i];
    cout<<ans<<"\n";
    return 0;
}
