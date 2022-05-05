#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],ans,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        ans=0;
        p=0;
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
        if(ara[n-1]==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=n-2;i>=0;i--)
        {
            while(ara[i]>=ara[i+1])
            {
                ara[i]/=2;
                ans++;
            }
            if(i!=0 && ara[i]==0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"-1\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
