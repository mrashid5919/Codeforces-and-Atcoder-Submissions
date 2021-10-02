#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],b[200005];

int main()
{
    fastio;
    long long n,i,x=0,mx=0;
    long double c;
    map<long double,long long> mp;
    map<long double,long long>::iterator it;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            if(b[i]==0)
                x++;
            continue;
        }
        c=(-1)*((long double)b[i]/ara[i]);
        it=mp.find(c);
        if(it!=mp.end())
            mp[c]++;
        else
            mp.insert(pair<long double, long long>(c, 1LL));
    }
    for(it=mp.begin();it!=mp.end();++it)
    {
        //cout<<it->first<<" "<<it->second<<"\n";
        mx=max(mx,it->second);
    }
    mx+=x;
    cout<<mx<<"\n";
    return 0;
}
