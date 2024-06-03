#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200006],g[200006];

int main()
{
    fastio;
    long long t,n,i,inv,p,cur;
    cin>>t;
    while(t--)
    {
        inv=0;
        p=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            if(i>1)
            {
                g[i-1]=__gcd(ara[i-1],ara[i]);
            }
        }
        for(i=2;i<n;i++)
        {
            if(g[i]<g[i-1])
            {
                inv++;
            }
        }
        for(i=1;i<=n;i++)
        {
            cur=inv;
            if(i==1)
            {
                if(g[2]<g[1])
                    cur--;
            }
            else if(i==n)
            {
                if(g[n-1]<g[n-2])
                    cur--;
            }
            else
            {
                if(i>2 && g[i-1]<g[i-2])
                    cur--;
                if(g[i]<g[i-1])
                    cur--;
                if(i<n-1 && g[i+1]<g[i])
                    cur--;
                long long x=__gcd(ara[i-1],ara[i+1]);
                if(i>2 && x<g[i-2])
                    cur++;
                if(i<n-1 && x>g[i+1])
                    cur++;
            }
            if(cur==0)
            {
                //cout<<i<<"\n";
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}