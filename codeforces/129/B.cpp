#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[150][150];

int main()
{
    fastio;
    int n,m,u,v,i,j,p,cnt=0,x,idx;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        ara[u-1][v-1]=1;
        ara[v-1][u-1]=1;
    }
    while(true)
    {
        vector<pair<int,int> > vect;
        p=0;
        for(i=0;i<n;i++)
        {
            x=0;
            for(j=0;j<n;j++)
            {
                if(ara[i][j]==1)
                {
                    x++;
                    idx=j;
                }
            }
            if(x==1)
            {
                p=1;
                ara[i][idx]=0;
                vect.push_back({idx,i});
            }
        }
        if(p==1)
            cnt++;
        else
            break;
        for(i=0;i<vect.size();i++)
            ara[vect[i].first][vect[i].second]=0;
    }
    cout<<cnt<<"\n";
    return 0;
}