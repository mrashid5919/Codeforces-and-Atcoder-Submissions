#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long dp[2005][2005];

int main()
{
    fastio;
    long long n,i,j,ara[2005],sum[2005]={0},c=0;
    cin>>n;
    vector<pair<long long,long long> > vect;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>=0)
        {
            if(i==0)
                sum[i]=ara[i];
            else
                sum[i]=sum[i-1]+ara[i];
            c++;
        }
        else
        {
            vect.push_back(make_pair(ara[i],i));
            if(i==0)
                sum[i]=0;
            else
                sum[i]=sum[i-1];
        }
    }
    sort(vect.begin(),vect.end(),greater<>());
    for(i=0;i<vect.size();i++)
    {
        int p=0;
        for(j=vect[i].second;j<n;j++)
        {
            if(sum[j]+vect[i].first<0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            c++;
            for(j=vect[i].second; j<n; j++)
            {
                sum[j]+=vect[i].first;
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}
