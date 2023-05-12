#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],mn[200005],mx[200005];

int main()
{
    fastio;
    long long t,n,k,i,sum,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        sum=0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>ara[i];
            mn[i]=ara[i];
            mx[i]=ara[i];
            sum+=ara[i];
        }
        sort(mn,mn+n);
        sort(mx,mx+n,greater<long long>());
        for(i=1;i<n;i++)
        {
            mn[i]+=mn[i-1];
            mx[i]+=mx[i-1];
        }
        for(i=0;i<=k;i++)
        {
            if(i==0)
                ans=max(ans,sum-mn[2*k-1]);
            else if(i==k)
                ans=max(ans,sum-mx[k-1]);
            else
                ans=max(ans,sum-mn[2*(k-i)-1]-mx[i-1]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
