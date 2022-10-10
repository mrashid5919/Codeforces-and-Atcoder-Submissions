#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,l,r,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        ans=0;
        l=0;
        r=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>=i-l+1)
                r++;
            else{
                long long temp=l;
                l=max(l+1,i-ara[i]+1);
                ans+=((r-temp)*(r-temp+1))/2-((r-l)*(r-l+1))/2;
                r++;
            }
        }
        ans+=((n-l)*(n-l+1))/2;
        cout<<ans<<"\n";
    }
    return 0;
}
