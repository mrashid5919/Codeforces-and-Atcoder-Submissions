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

int vis[105][105];
char ara[105][105];

int main()
{
    fastio;
    int n,m,i,j,curx,cury,dist=0;
    string s;
    cin>>n>>m>>curx>>cury;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>ara[i][j];
        }
    }
    cin>>s;
    if(ara[curx][cury]=='@')
    {
        dist++;
        vis[curx][cury]=1;
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            if(cury-1>=1 && ara[curx][cury-1]!='#')
                cury--;
        }
        else if(s[i]=='R')
        {
            if(cury+1<=m && ara[curx][cury+1]!='#')
                cury++;
        }
        else if(s[i]=='U')
        {
            if(curx-1>=1 && ara[curx-1][cury]!='#')
                curx--;
        }
        else
        {
            if(curx+1<=n && ara[curx+1][cury]!='#')
                curx++;
        }
        if(ara[curx][cury]=='@' && vis[curx][cury]==0)
        {
            dist++;
            vis[curx][cury]=1;
        }
    }
    cout<<curx<<" "<<cury<<" "<<dist<<"\n";
    return 0;
}