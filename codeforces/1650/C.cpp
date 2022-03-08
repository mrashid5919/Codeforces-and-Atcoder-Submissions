#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long x[200005],w[200005];

struct seg
{
    long long idx;
    long long co;
    long long wt;
};

bool com1(seg g1,seg g2)
{
    return (g1.wt<g2.wt);
}

bool com2(seg g1,seg g2)
{
    return (g1.co<g2.co);
}

seg ara[200005],ans[200005];

int main()
{
    fastio;
    long long t,n,m,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>x[i]>>w[i];
        for(i=0;i<m;i++)
        {
            ara[i].co=x[i];
            ara[i].wt=w[i];
            ara[i].idx=i+1;
        }
        sort(ara,ara+m,com1);
        for(i=0;i<2*n;i++)
        {
            ans[i]=ara[i];
            sum+=ara[i].wt;
        }
        cout<<sum<<"\n";
        sort(ans,ans+2*n,com2);
        for(i=0;i<n;i++)
            cout<<ans[i].idx<<" "<<ans[2*n-i-1].idx<<"\n";
    }
    return 0;
}
