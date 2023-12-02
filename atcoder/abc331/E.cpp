#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],bs[100005];
vector<long long> adjm[100005],adjs[100005];

int main()
{
    fastio;
    long long n,m,l,i,j,c,d,x,mx=0;
    vector<pair<long long,long long> > ms,ss;
    cin>>n>>m>>l;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ms.push_back({x,i});
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        ss.push_back({x,i});
    }
    sort(ms.begin(),ms.end());
    sort(ss.begin(),ss.end());
    for(i=0;i<n;i++)
    {
        ara[ms[i].second]=n-1-i;
    }
    for(i=0;i<m;i++)
        bs[ss[i].second]=m-1-i;
    // for(i=0;i<m;i++)
    //     cout<<bs[i]<<" ";
    // for(i=0;i<n;i++)
    //     cout<<ara[i]<<" ";
    // cout<<"\n";
    for(i=0;i<l;i++)
    {
        cin>>c>>d;
        adjm[c-1].push_back(bs[d-1]);
        adjs[d-1].push_back(ara[c-1]);
    }
    for(i=0;i<n;i++)
    {
        if(adjm[i].size()==0)
        {
            mx=max(mx,ms[n-1-ara[i]].first+ss[m-1].first);
            //cout<<mx<<"\n";
            continue;
        }
        sort(adjm[i].begin(),adjm[i].end());
        for(j=0;j<adjm[i].size();j++)
        {
            if(j==0)
            {
                if(adjm[i][j]!=0)
                {
                    mx=max(mx,ms[n-1-ara[i]].first+ss[m-1].first);
                    break;
                }
            }
            else if(adjm[i][j]!=adjm[i][j-1]+1)
            {
                mx=max(mx,ms[n-1-ara[i]].first+ss[m-1-(adjm[i][j-1]+1)].first);
                break;
            }
            if(j==adjm[i].size()-1 && adjm[i][j]!=m-1)
                mx=max(mx,ms[n-1-ara[i]].first+ss[m-1-(adjm[i][j]+1)].first);
        }
        //cout<<mx<<"\n";
    }
    for(i=0;i<m;i++)
    {
        if(adjs[i].size()==0)
        {
            mx=max(mx,ss[m-1-bs[i]].first+ms[n-1].first);
            continue;
        }
        sort(adjs[i].begin(),adjs[i].end());
        for(j=0;j<adjs[i].size();j++)
        {
            if(j==0)
            {
                if(adjs[i][j]!=0)
                {
                    mx=max(mx,ss[m-1-bs[i]].first+ms[n-1].first);
                    break;
                }
            }
            else if(adjs[i][j]!=adjs[i][j-1]+1)
            {
                mx=max(mx,ss[m-1-bs[i]].first+ms[n-1-(adjs[i][j-1]+1)].first);
                break;
            }
            if(j==adjs[i].size()-1 && adjs[i][j]!=n-1)
                 mx=max(mx,ss[m-1-bs[i]].first+ms[n-1-(adjs[i][j]+1)].first);
        }
    }
    cout<<mx<<"\n";
    return 0;
}