#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    fastio;
    long long t,n,i,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        vector<long long> dv;
        map<long long,long long> mp;
        for(i=2;i*i<=n;i++)
        {
            if(n==1)
                break;
            if(n%i==0)
                dv.push_back(i);
            while(n%i==0)
            {
                mp[i]++;
                n/=i;
            }
        }
        if(n!=1)
        {
            dv.push_back(n);
            mp[n]++;
        }
        vector<pair<long long,long long> > vect;
        for(i=0;i<dv.size();i++)
            vect.push_back(make_pair(dv[i],mp[dv[i]]));
        sort(vect.begin(),vect.end(),sortbysec);
        if(dv.size()>1){
        for(i=dv.size()-2;i>=0;i--){
            vect[i].first=vect[i+1].first*vect[i].first;
        }
        }
        for(i=0;i<vect.size();i++)
        {
            if(i==0)
                ans+=vect[i].first*vect[i].second;
            else
                ans+=vect[i].first*(vect[i].second-vect[i-1].second);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
