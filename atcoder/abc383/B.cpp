#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

char ara[15][15];

int main()
{
    fastio;
    int n,m,d,i,j,mx=0,cnt,cur,k;
    vector<pair<int,int> > vect;
    cin>>n>>m>>d;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]=='.')
            {
                vect.push_back({i,j});
            }
        }
    }
    cnt=vect.size();
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            cur=0;
            for(k=0;k<cnt;k++)
            {
                if(abs(vect[i].first-vect[k].first)+abs(vect[i].second-vect[k].second)<=d || abs(vect[j].first-vect[k].first)+abs(vect[j].second-vect[k].second)<=d)
                {
                    cur++;
                }
            }
            mx=max(mx,cur);
        }
    }
    cout<<mx<<"\n";
    return 0;
}