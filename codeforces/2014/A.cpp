#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,i,ara[100],cur,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cur=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>=k)
                cur+=ara[i];
            if(ara[i]==0 && cur>0)
            {
                ans++;
                cur--;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}