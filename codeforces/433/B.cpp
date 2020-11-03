#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,typ,l,r,ans;
    static long long v[100005],ps[100005],so[100005];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i==1)
        {
            ps[i]=v[i];
        }
        else
            ps[i]=ps[i-1]+v[i];
    }
    sort(v+1,v+n+1);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            so[i]=v[i];
        else
            so[i]=so[i-1]+v[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>typ>>l>>r;
        if(typ==1)
        {
            if(l==1)
                ans=ps[r];
            else
                ans=ps[r]-ps[l-1];
        }
        else
        {
            if(l==1)
                ans=so[r];
            else
                ans=so[r]-so[l-1];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
