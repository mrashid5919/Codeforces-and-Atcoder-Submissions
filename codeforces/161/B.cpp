#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long c[1005],t[1005];
vector<pair<long long,long long> > vect,el;
vector<long long> ans[1005];

int main()
{
    fastio;
    long long n,k,i,j,x,sum=0,od=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>c[i]>>t[i];
        if(t[i]==1)
            vect.push_back(make_pair(c[i],i));
        else
            el.push_back(make_pair(c[i],i));
        sum+=c[i];
    }
    sort(vect.begin(),vect.end());
    x=vect.size();
    for(i=0;i<min(k,x);i++)
        ans[i].push_back(vect[x-1-i].second);
    if(x<k)
    {
        for(i=x;i<k;i++)
            ans[i].push_back(el[i-x].second);
        for(i=k-x;i<el.size();i++)
            ans[k-1].push_back(el[i].second);
    }
    else
    {
        for(i=k;i<x;i++)
            ans[k-1].push_back(vect[x-1-i].second);
        for(i=0;i<el.size();i++)
            ans[k-1].push_back(el[i].second);
    }
    for(i=0;i<min(x,k-1);i++)
    {
        sum-=c[ans[i][0]]/2;
        if(c[ans[i][0]]%2==1)
            od++;
    }
    if(x>=k)
    {
        long long mn;
        for(i=0;i<ans[k-1].size();i++)
        {
            if(i==0)
                mn=c[ans[k-1][i]];
            else
                mn=min(mn,c[ans[k-1][i]]);
        }
        sum-=mn/2;
        if(mn%2==1)
            od++;
    }
    sum-=od/2;
    if(od%2==0)
        cout<<sum<<".0\n";
    else
        cout<<sum-1<<".5\n";
    for(i=0;i<k;i++)
    {
        cout<<ans[i].size()<<" ";
        for(j=0;j<ans[i].size();j++)
            cout<<ans[i][j]+1<<" ";
        cout<<"\n";
    }
    return 0;
}