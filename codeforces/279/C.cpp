#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long n,m,i,l,r;
    cin>>n>>m;
    vector<long long> asc,desc;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i>0)
        {
            if(ara[i]>ara[i-1])
                asc.push_back(i+1);
            else if(ara[i]<ara[i-1])
                desc.push_back(i+1);
        }
    }
    while(m--)
    {
        cin>>l>>r;
        vector<long long>::iterator it1,it2;
        it1=upper_bound(desc.begin(),desc.end(),l);
        if(it1==desc.end())
        {
            cout<<"Yes\n";
            continue;
        }
        if((*it1)>=r)
        {
            cout<<"Yes\n";
            continue;
        }
        it2=upper_bound(asc.begin(),asc.end(),*(it1));
        if(it2==asc.end())
        {
            cout<<"Yes\n";
            continue;
        }
        if(*(it2)>r)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}