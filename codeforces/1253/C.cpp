#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],ans[200005],s[200005];

int main()
{
    fastio;
    long long n,m,i;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        s[i%m]+=ara[i];
        if(i==0)
            ans[i]=ara[i];
        else
            ans[i]=ans[i-1]+s[i%m];
    }
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
