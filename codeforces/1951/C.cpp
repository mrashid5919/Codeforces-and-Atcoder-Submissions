#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[300005];

int main()
{
    fastio;
    long long t,n,m,k,i,ans,x,cnt,cur;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        vector<pair<long long,long long> > vect;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            vect.push_back({ara[i],i});
        }
        sort(vect.begin(),vect.end());
        if(k%m==0)
            x=k/m;
        else
            x=k/m+1;
        vector<long long> idx;
        for(i=0;i<x;i++)
        {
            idx.push_back(vect[i].second);
        }
        sort(idx.begin(),idx.end());
        ans=0;
        cnt=0;
        for(i=0;i<x;i++)
        {
            if(i==x-1)
            {
                ans+=(k-cnt)*ara[idx[i]]+cnt*(k-cnt);
            }
            else
            {
                ans+=ara[idx[i]]*m+cnt*m;
                cnt+=m;
            }
            //cout<<ans<<"\n";
        }
        if(k%m!=0)
        {
            cur=ans;
            for(i=x-2;i>=0;i--)
            {
                cur-=ara[idx[i+1]]*(k%m)+(i+1)*m*(k%m);
                cur+=ara[idx[i+1]]*m+(i*m+k%m)*m;
                cur-=ara[idx[i]]*m+(i*m)*m;
                cur+=ara[idx[i]]*(k%m)+i*m*(k%m);
                ans=min(ans,cur);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}