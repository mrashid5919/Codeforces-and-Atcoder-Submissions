#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,ara[500],sum,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        sum=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        map<long long,long long> mp;
        for(i=n-2*k;i<n;i++)
            mp[ara[i]]++;
        for(i=n-2*k;i<n;i++)
        {
            if(mp[ara[i]]>k)
            {
                p=1;
                sum=mp[ara[i]]-k;
                break;
            }
        }
        for(i=0;i<n-2*k;i++)
            sum+=ara[i];
        cout<<sum<<"\n";
    }
    return 0;
}
