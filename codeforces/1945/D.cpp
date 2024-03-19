#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200006],b[200006];

int main()
{
    fastio;
    long long t,n,m,i,mn,cur;
    cin>>t;
    while(t--)
    {
        mn=0;
        cin>>n>>m;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
            cin>>b[i];
        for(i=n;i>m;i--)
            mn+=min(ara[i],b[i]);
        mn+=ara[m];
        cur=mn;
        for(i=m;i>1;i--)
        {
            cur-=ara[i];
            cur+=min(ara[i],b[i])+ara[i-1];
            mn=min(mn,cur);
        }
        cout<<mn<<"\n";
    }
    return 0;
}