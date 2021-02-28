#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,u,v,i,ara[110],x,p,q,ans,flag;
    cin>>t;
    while(t--)
    {
        p=0;
        q=0;
        cin>>n>>u>>v;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            if(i>0 && abs(ara[i]-ara[i-1])>=2)
                p=1;
            if(i>0 && ara[i]!=ara[i-1])
                q=1;
        }
        if(p==1)
            ans=0;
        else if(q==0)
        {
            ans=min(2*v,u+v);
        }
        else
            ans=min(u,v);
        cout<<ans<<"\n";
    }
    return 0;
}
