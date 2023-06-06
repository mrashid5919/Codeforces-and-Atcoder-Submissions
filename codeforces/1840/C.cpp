#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,q,i,cur,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        cur=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<=q)
            {
                cur++;
                if(cur>=k)
                    ans+=(cur-k+1);
            }
            else
                cur=0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
