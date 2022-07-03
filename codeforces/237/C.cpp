#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005];
vector<long long> primes;

void sieve()
{
    for(long long i=2;i*i<=1000000;i++)
    {
        if(ara[i]==0)
        {
            for(long long j=i*i;j<=1000000;j+=i)
                ara[j]=1;
        }
    }
}

int main()
{
    fastio;
    long long a,b,k,i,mx=INT_MIN,l,r;
    cin>>a>>b>>k;
    sieve();
    for(i=a;i<=b;i++)
    {
        if(i==1)
            continue;
        if(ara[i]==0)
            primes.push_back(i);
    }
    if(primes.size()<k)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for(i=a;i<=b;i++)
    {
        if(i==a)
        {
            l=0;
            r=k-1;
            mx=primes[r]-i+1;
        }
        else if(i>primes[l])
        {
            l++;
            r++;
            if(r==primes.size())
            {
                mx=max(mx,b-primes[l-1]+1);
                break;
            }
            mx=max(mx,primes[r]-i+1);
        }
    }
    cout<<mx<<"\n";
    return 0;
}
