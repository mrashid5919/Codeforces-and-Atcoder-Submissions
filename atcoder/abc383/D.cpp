#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<int> primes;

int ara[2000005]={0};

void sieve()
{
    
    for(int i=2;i*i<=2000000;i++)
    {
        if(ara[i]==0)
        {
            for(int j=i*i;j<=2000000;j+=i)
            {
                ara[j]=1;
            }
        }
        
    }
    for(int i=2;i<=2000000;i++)
    {
        if(ara[i]==0)
            primes.push_back(i);
    }
}

long long power(long long x,long long y)
{
    long long u=1LL;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long n,cnt,ans=0,pos,i,tar;
    sieve();
    cin>>n;
    cnt=primes.size();
    for(i=0;i<cnt;i++)
    {
        if(power(primes[i],4)>n)
            break;
        tar=sqrt(n/(primes[i]*primes[i]));
        pos=lower_bound(primes.begin(),primes.end(),tar)-primes.begin();
        if(primes[pos]>tar)
            pos--;
        ans+=pos-i;
        if(primes[i]<100 && power(primes[i],8)<=n)
            ans++;
    }
    cout<<ans<<"\n";
    return 0;
}