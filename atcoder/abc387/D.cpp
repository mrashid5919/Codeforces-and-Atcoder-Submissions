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

char ara[1005][1005];
long long mn[4][1000005];

int main()
{
    fastio;
    long long i,j,n,m,st,dest;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]=='S')
                st=i*m+j;
            if(ara[i][j]=='G')
                dest=i*m+j;
        }
    }
    queue<pair<pair<long long,long long>, long long> > q;
    q.push({{st,0},0});
    q.push({{st,1},0});
    while(!q.empty())
    {
        long long x=q.front().first.first;
        long long y=q.front().first.second;
        long long z=q.front().second;
        //cout<<x<<" "<<y<<" "<<z<<"\n";
        q.pop();
        if(x<0 || x>=n*m || ara[x/m][x%m]=='#')
            continue;
        if(mn[y][x]!=0 && mn[y][x]<=z)
            continue;
        mn[y][x]=z;
        if(y==0)
        {
            if(x%m!=m-1)
                q.push({{x+1,1},z+1});
            if(x%m!=0)
                q.push({{x-1,1},z+1});
        }
        else
        {
            if(x/m!=n-1)
                q.push({{x+m,0},z+1});
            if(x/m!=0)
                q.push({{x-m,0},z+1});
        }
        
    }
    if(mn[0][dest]==0 && mn[1][dest]==0)
        cout<<"-1\n";
    else if(mn[0][dest]==0)
        cout<<mn[1][dest]<<"\n";
    else if(mn[1][dest]==0)
        cout<<mn[0][dest]<<"\n";
    else
        cout<<min(mn[0][dest],mn[1][dest])<<"\n";
    return 0;
}