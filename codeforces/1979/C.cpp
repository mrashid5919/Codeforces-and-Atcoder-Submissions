#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100],ans[100];

int main()
{
    fastio;
    long long t,n,i,lcm,p,sm;
    cin>>t;
    while(t--)
    {
        sm=0;
        p=0;
        cin>>n;
        lcm=1;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            lcm=(lcm*ara[i])/__gcd(lcm,ara[i]);
        }
        for(i=0;i<n;i++)
        {
            ans[i]=lcm/ara[i];
            sm+=ans[i];
        }
        for(i=0;i<n;i++)
        {
            if(ans[i]>1000000000)
            {
                p=1;
                break;
            }
            if(ans[i]*ara[i]<=sm)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"-1\n";
        else
        {
            for(i=0;i<n;i++)
                cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}