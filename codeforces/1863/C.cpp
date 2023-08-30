#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],b[200005];

int main()
{
    fastio;
    long long t,n,k,i,mex;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<=n;i++)
            b[i]=0;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            b[ara[i]]=1;
        }
        for(i=0;i<=n;i++)
        {
            if(b[i]==0)
            {
                ara[0]=i;
                break;
            }
        }
        //ara[0]=mex;
        long long init=n+1-(k%(n+1))+1;
        for(i=init;i<init+n;i++)
            cout<<ara[i%(n+1)]<<" ";
        cout<<"\n";
    }
    return 0;
}