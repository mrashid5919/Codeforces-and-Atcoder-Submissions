#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    int n,i,ara[105],sum=0;
    vector<int> ev,od;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
            ev.push_back(ara[i]);
        else
            od.push_back(ara[i]);
    }
    if(od.size()==0)
        cout<<0<<"\n";
    else
    {
        sort(od.begin(),od.end(),greater<int>());
        for(i=0;i<ev.size();i++)
            sum+=ev[i];
        for(i=0;i<od.size()-1;i++)
            sum+=od[i];
        if(od.size()%2==1)
            sum+=od[i];
        cout<<sum<<"\n";
    }
    return 0;
}