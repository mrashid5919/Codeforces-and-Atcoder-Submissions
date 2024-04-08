#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005],b[200005];
 
int main()
{
    fastio;
    int t,n,m,k,i,cnt,dist,match;
    cin>>t;
    while(t--)
    {
        cnt=0;
        dist=0;
        match=0;
        cin>>n>>m>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        map<int,int> mp;
        vector<pair<int,int> > vect;
        vect.push_back({0,0});
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            if(mp[b[i]]==0)
            {
                mp[b[i]]=dist+1;
                dist++;
                vect.push_back({1,0});
            }
            else
                vect[mp[b[i]]].first++;
        }
        for(i=0;i<m;i++)
        {
            if(mp[ara[i]]!=0)
                vect[mp[ara[i]]].second++;
        }
        for(i=0;i<=dist;i++)
            match+=min(vect[i].first,vect[i].second);
        if(match>=k)
            cnt++;
        for(i=1;i<=n-m;i++)
        {
            if(mp[ara[i-1]]!=0){
                int x=mp[ara[i-1]];
                vect[x].second--;
                if(vect[x].second<vect[x].first)
                    match--;
            }
            if(mp[ara[i+m-1]]!=0){
                int x=mp[ara[i+m-1]];
                vect[x].second++;
                if(vect[x].second<=vect[x].first)
                    match++;
            }
            if(match>=k)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}