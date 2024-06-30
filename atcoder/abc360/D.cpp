#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long n,t,i,ans=0,lef=0,rig=0;
    string s;
    cin>>n>>t;
    cin>>s;
    vector<long long> l,r;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(s[i]=='0'){
            l.push_back(ara[i]);
            lef++;
        }
        else{
            r.push_back(ara[i]);
            rig++;
        }
    }
    if(lef==0 || rig==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    vector<long long>::iterator it1,it2;
    //cout<<l.size()<<"\n";
    for(i=0;i<rig;i++)
    {
        it1=upper_bound(l.begin(),l.end(),r[i]);
        if(it1==l.end())
            continue;
        // if(i==0)
        // {
        //     cout<<(it1-l.begin())<<"\n";
        // }   
        it2=upper_bound(l.begin(),l.end(),r[i]+2*t);
        if(it2==l.end())
            ans+=lef-(it1-l.begin());
        else
            ans+=(it2-l.begin())-(it1-l.begin());
    }
    cout<<ans<<"\n";
    return 0;
}