#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long q,l,r,i,cnt=0;
    char op;
    map<pair<long long,long long>,long long> mp;
    multiset<long long> ml,mr;
    cin>>q;
    while(q--)
    {
        cin>>op>>l>>r;
        if(op=='+')
        {
            mp[{l,r}]++;
            if(mp[{l,r}]==1)
                cnt++;
            ml.insert(l);
            mr.insert(r);
        }
        else
        {
            mp[{l,r}]--;
            if(mp[{l,r}]==0)
                cnt--;
            ml.erase(ml.find(l));
            mr.erase(mr.find(r));
        }
        if(cnt<=1)
        {
            cout<<"NO\n";
            continue;
        }
        if(*(mr.begin())<*(ml.rbegin()))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}