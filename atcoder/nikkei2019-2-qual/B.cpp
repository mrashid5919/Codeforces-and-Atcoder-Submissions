#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

unsigned long long d[100005];

unsigned long long power(unsigned long long x,
                                  unsigned long long y, unsigned long long p)
{
    unsigned long long res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
    // equal to p

    while (y > 0)
    {

        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    fastio;
    unsigned long long n,i,ans=1LL,M=998244353;
    cin>>n;
    map<unsigned long long,unsigned long long> mp;
    for(i=0;i<n;i++)
    {
        cin>>d[i];
        if(i==0 && d[i]!=0)
            ans=0;
        if(i!=0 && d[i]==0)
            ans=0;
        mp[d[i]]++;
    }
    sort(d,d+n);
    for(i=1;i<n;i++)
    {
        if(d[i]-d[i-1]>1)
        {
            ans=0;
            break;
        }
    }
    if(ans==0)
    {
        cout<<0<<"\n";
        return 0;
    }
    for(i=1;i<=d[n-1];i++)
    {
        ans=(ans*power(mp[i-1],mp[i],M))%M;
    }
    cout<<ans<<"\n";
    return 0;
}
