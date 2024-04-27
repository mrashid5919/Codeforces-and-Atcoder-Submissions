#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,c[105],cnt[105],i,mx;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;i<=100;i++)
            cnt[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            cnt[c[i]]++;
        }
        mx=0;
        for(i=1;i<=100;i++)
            mx=max(mx,cnt[i]);
        if(mx>=k)
            cout<<k-1<<"\n";
        else
            cout<<n<<"\n";
    }
    return 0;
}