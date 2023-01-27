#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        vector<long long> vect;
        map<long long,long long> mp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
            if(mp[ara[i]]==1)
                vect.push_back(ara[i]);
        }
        sort(vect.begin(),vect.end());
        for(i=0;i<vect.size();i++)
        {
            if(mp[vect[i]+1]<mp[vect[i]])
                cnt+=mp[vect[i]]-mp[vect[i]+1];
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
