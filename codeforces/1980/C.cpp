#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],b[200005],d[200005];

int main()
{
    fastio;
    long long t,n,m,p,i,tot,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        tot=0;
        f=0;
        p=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        map<long long,long long> dif;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(ara[i]!=b[i]){
                dif[b[i]]++;
                tot++;
            }
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>d[i];
            if(i==m-1 && dif[d[i]]>0)
                f=1;
        }
        for(i=0;i<m;i++)
        {
            if(dif[d[i]]>0)
            {
                dif[d[i]]--;
                tot--;
            }
        }
        if(tot!=0)
        {
            cout<<"NO\n";
            continue;
        }
        if(f==1)
        {
            cout<<"YES\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==b[i] && ara[i]==d[m-1])
            {
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