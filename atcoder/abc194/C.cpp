#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005];

int main()
{
    fastio;
    long long n,i,sum=0,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
        ans+=(ara[i]*ara[i]);
    }
    ans=(n*ans)-(sum*sum);
    cout<<ans<<"\n";
    return 0;
}
