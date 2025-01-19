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

int ara[2005][2005];

int main()
{
    fastio;
    int t,n,m,i,j,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>ara[i][j];
            sort(ara[i],ara[i]+m);
        }
        vector<pair<int,int> > vect;
        for(i=0;i<n;i++)
        {
            vect.push_back({ara[i][0],i});
        }
        sort(vect.begin(),vect.end());
        for(i=0;i<n;i++)
        {
            if(vect[i].first!=i)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        {
            cout<<"-1\n";
            continue;
        }
        for(j=1;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                if(ara[vect[i].second][j]!=j*n+i)
                {
                    //cout<<ara[vect[i].second][j]<<"\n";
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            cout<<-1<<"\n";
        else
        {
            for(i=0;i<n;i++)
                cout<<vect[i].second+1<<" ";
            cout<<"\n";
        }
    }
    return 0;
}