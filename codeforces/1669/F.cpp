#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],lsum[200005],rsum[200005];

int main()
{
    fastio;
    long long t,n,i,l,r,x;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                lsum[i]=ara[i];
            else
                lsum[i]=lsum[i-1]+ara[i];
        }
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
                rsum[i]=ara[i];
            else
                rsum[i]=rsum[i+1]+ara[i];
        }
        map<long long,long long> mp1;
        map<long long,long long> mp2;
        for(i=0;i<n;i++)
        {
            mp1[lsum[i]]=i+1;
            mp2[rsum[i]]=i+1;
        }
        for(i=0;i<n;i++)
        {
            if(mp2[lsum[i]]>i+1)
                x=max(x,i+1+n+1-mp2[lsum[i]]);
        }
        cout<<x<<"\n";
    }
    return 0;
}
