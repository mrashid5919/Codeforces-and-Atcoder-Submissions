#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long p[200006],ara[200006],vis[200006];

int main()
{
    fastio;
    long long t,n,k,i,posb,poss,mxb,mxs,prv,mx;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n>>k>>posb>>poss;
        for(i=1;i<=n;i++)
            cin>>p[i];
        for(i=1;i<=n;i++){
            cin>>ara[i];
            mx=max(mx,ara[i]);
            vis[i]=0;
        }
        mxb=0,mxs=0,prv=0;
        for(i=0;i<k;i++)
        {
            if(vis[posb]==1)
                break;
            mxb=max(mxb,prv+ara[posb]*(k-i));
            prv+=ara[posb];
            vis[posb]=1;
            if(ara[posb]==mx)
                break;
            posb=p[posb];
        }
        prv=0;
        for(i=1;i<=n;i++)
            vis[i]=0;
        for(i=0;i<k;i++)
        {
            if(vis[poss]==1)
                break;
            mxs=max(mxs,prv+ara[poss]*(k-i));
            prv+=ara[poss];
            vis[poss]=1;
            if(ara[poss]==mx)
                break;
            poss=p[poss];
        }
        if(mxb>mxs)
            cout<<"Bodya\n";
        else if(mxs>mxb)
            cout<<"Sasha\n";
        else
            cout<<"Draw\n";
    }
    return 0;
}