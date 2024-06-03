#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

pair<int,int> pos[200005],pos2[200005];

int main()
{
    fastio;
    int t,n,m,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int> > ara(n,vector<int>(m));
        vector<vector<int> > b(n,vector<int>(m));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                pos[ara[i][j]]={i,j};
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){
                cin>>b[i][j];
                pos2[b[i][j]]={i,j};
            }
        }
        p=0;
        for(i=0;i<n;i++)
        {
            int cur=pos2[ara[i][0]].first;
            for(j=1;j<m;j++)
            {
                if(pos2[ara[i][j]].first!=cur)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<m;i++)
        {
            int cur=pos2[ara[0][i]].second;
            for(j=1;j<n;j++)
            {
                if(pos2[ara[j][i]].second!=cur)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}