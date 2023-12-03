#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,g,cnt,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cnt=0;
        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(i==1)
                g=ara[i]-ara[i-1];
            else
                g=__gcd(g,ara[i]-ara[i-1]);
        }
        for(i=n-1;i>0;i--)
        {
            if(ara[i]-ara[i-1]>g)
            {
                ara[n]=ara[i]-g;
                p=1;
                break;
            }
        }

        if(p==0)
        {
            ara[n]=ara[n-1]+g;
        }
        // for(i=0;i<=n;i++)
        //     cout<<ara[i]<<" ";
        // cout<<"\n";
        sort(ara,ara+n+1);
        for(i=1;i<=n;i++)
        {
            cnt+=i*((ara[i]-ara[i-1])/g);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}