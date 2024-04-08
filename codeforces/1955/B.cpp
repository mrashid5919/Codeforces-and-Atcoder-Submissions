#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[505][505];

int main()
{
    fastio;
    long long t,n,c,d,i,j,p,x,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>d;
        p=0;
        map<long long,long long> mp;
        for(i=0;i<n*n;i++)
        {
            cin>>x;
            if(i==0)
                mn=x;
            else
                mn=min(mn,x);
            mp[x]++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 && j==0)
                {
                    ara[i][j]=mn;
                    mp[mn]--;
                }
                else if(j==0)
                {
                    ara[i][j]=ara[i-1][j]+c;
                    if(mp[ara[i][j]]==0)
                    {
                        p=1;
                        break;
                    }
                    mp[ara[i][j]]--;
                }
                else if(i==0)
                {
                    ara[i][j]=ara[i][j-1]+d;
                    if(mp[ara[i][j]]==0)
                    {
                        p=1;
                        break;
                    }
                    mp[ara[i][j]]--;
                }
                else
                {
                    if(ara[i][j-1]+d!=ara[i-1][j]+c)
                    {
                        p=1;
                        break;
                    }
                    ara[i][j]=ara[i][j-1]+d;
                    if(mp[ara[i][j]]==0)
                    {
                        p=1;
                        break;
                    }
                    mp[ara[i][j]]--;
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