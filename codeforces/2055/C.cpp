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

long long ara[1005][1005],rc[1005],cc[1005],rsum[1005],csum[1005];

int main()
{
    fastio;
    long long t,n,m,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        for(i=0;i<n;i++)
        {
            rsum[i]=0;
            rc[i]=0;
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                rsum[i]+=ara[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            csum[i]=0;
            cc[i]=0;
            for(j=0;j<n;j++)
            {
                csum[i]+=ara[j][i];
            }
        }
        long long posx=0,posy=0;
        rc[0]=1;
        cc[0]=1;
        for(i=0;i<n+m-2;i++)
        {
            if(s[i]=='R')
            {
                posy++;
            }
            else
            {
                posx++;
            }
            rc[posx]++;
            cc[posy]++;
        }
        if(rc[0]==1)
        {
            ara[0][0]=(-1)*rsum[0];
        }
        else
            ara[0][0]=(-1)*csum[0];
        rc[0]--; cc[0]--; rsum[0]+=ara[0][0]; csum[0]+=ara[0][0];
        posx=0; posy=0;
        for(i=0;i<n+m-2;i++)
        {
            if(s[i]=='R')
            {
                posy++;
            }
            else
            {
                posx++;
            }
            if(rc[posx]==1)
            {
                ara[posx][posy]=(-1)*rsum[posx];
            }
            else
            {
                ara[posx][posy]=(-1)*csum[posy];
            }
            rc[posx]--; cc[posy]--; rsum[posx]+=ara[posx][posy]; csum[posy]+=ara[posx][posy];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<ara[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}