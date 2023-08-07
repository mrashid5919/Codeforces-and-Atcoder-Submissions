#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x;
    cin>>t;
    while(t--)
    {
        map<long long,long long> mp;
        vector<pair<long long,long long> > vect;
        vector<long long> ans;
        cin>>n;
        for(i=0;i<(n*(n-1))/2;i++)
        {
            cin>>x;
            mp[x]++;
        }
        map<long long,long long>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            vect.push_back(make_pair(it->first,it->second));
        }
        x=vect.size();
        long long cnt=1;
        ans.push_back(vect[x-1].first);
        for(i=x-1;i>=0;i--)
        {
            while(vect[i].second>0)
            {
                ans.push_back(vect[i].first);
                vect[i].second-=cnt;
                cnt++;
            }
        }
        for(i=n-1;i>=0;i--)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}