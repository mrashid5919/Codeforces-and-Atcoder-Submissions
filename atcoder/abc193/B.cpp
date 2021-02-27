#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ans=INT_MAX,t=0;
    static long long a[100005],p[100005],x[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>p[i]>>x[i];
        if(a[i]<x[i])
        {
            t=1;
            ans=min(ans,p[i]);
        }
    }
    if(t==0)
        cout<<-1<<"\n";
    else
        cout<<ans<<"\n";
    return 0;
}
