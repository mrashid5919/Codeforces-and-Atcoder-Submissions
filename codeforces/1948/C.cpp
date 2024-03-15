#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

char ara[7][200005],vis[400005];

int main()
{
    fastio;
    long long t,n,i,j,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ara[i][j];
                vis[i*n+j]=0;
            }
        }
        if(ara[1][n-2]!='>')
        {
            cout<<"NO\n";
            continue;
        }
        if(n==2)
        {
            cout<<"YES\n";
            continue;
        }
        queue<pair<long long,long long> > q;
        q.push({1,n-2});
        while(!q.empty())
        {
            pair<long long,long long> pr=q.front();
            q.pop();
            if(pr.second>1)
            {

                if(ara[pr.first][pr.second-2]=='>')
                {
                    if((pr.first==0 && pr.second-2==1) || (pr.first==1 && pr.second-2==0))
                    {
                        p=1;
                        break;
                    }
                    if(vis[pr.first*n+pr.second-2]==0)
                    {
                        q.push({pr.first,pr.second-2});
                        vis[pr.first*n+pr.second-2]=1;
                    }
                }
            }
            if(pr.second>0)
            {
                if(ara[1-pr.first][pr.second-1]=='>')
                {
                    if((1-pr.first==0 && pr.second-1==1) || (1-pr.first==1 && pr.second-1==0))
                    {
                        p=1;
                        break;
                    }
                    if(vis[(1-pr.first)*n+pr.second-1]==0)
                    {
                        q.push({1-pr.first,pr.second-1});
                        vis[(1-pr.first)*n+pr.second-1]=1;
                    }
                }
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}