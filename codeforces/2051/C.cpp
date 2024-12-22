#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[300005],b[300005];

int main()
{
    fastio;
    long long t,n,m,k,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        for(i=0;i<m;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
            b[i]=0;
        for(i=0;i<k;i++)
        {
            cin>>x;
            b[x]=1;
        }
        if(k<n-1)
        {
            for(i=0;i<m;i++)
                cout<<'0';
            cout<<"\n";
        }
        else if(k==n)
        {
            for(i=0;i<m;i++)
                cout<<'1';
            cout<<"\n";
        }
        else
        {
            for(i=0;i<m;i++)
            {
                if(b[ara[i]]==1)
                    cout<<'0';
                else
                    cout<<'1';
            }
            cout<<"\n";
        }
    }
    return 0;
}