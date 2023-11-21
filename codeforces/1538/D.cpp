#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<long long> primes;

long long ara[100005]={0};

void sieve()
{
    
    for(long long i=2;i*i<=100000;i++)
    {
        if(ara[i]==0)
        {
            for(long long j=i*i;j<=100000;j+=i)
            {
                ara[j]=1;
            }
        }
        
    }
    for(long long i=2;i<=100000;i++)
    {
        if(ara[i]==0)
            primes.push_back(i);
    }
}

int main()
{
    fastio;
    long long t,a,b,k,i,g,p,cnt1,cnt2,cntg,cur;
    sieve();
    cin>>t;
    while(t--)
    {
        p=0;
        cnt1=0;
        cnt2=0;
        cntg=0;
        cin>>a>>b>>k;
        g=__gcd(a,b);
        if(a%b==0 || b%a==0)
            p=1;
        if(a==b)
            p=0;
        a/=g;
        b/=g;
        for(i=0;primes[i]*primes[i]<=a;i++)
        {
            if(a%primes[i]==0)
            {
                cur=0;
                while(a%primes[i]==0)
                {
                    cur++;
                    a/=primes[i];
                }
                cnt1+=cur;
            }
            if(a==1)
                break;
        }
        if(a!=1)
            cnt1++;
        for(i=0;primes[i]*primes[i]<=b;i++)
        {
            if(b%primes[i]==0)
            {
                cur=0;
                while(b%primes[i]==0)
                {
                    cur++;
                    b/=primes[i];
                }
                cnt2+=cur;
            }
            if(b==1)
                break;
        }
        if(b!=1)
            cnt2++;
        for(i=0;primes[i]*primes[i]<=g;i++)
        {
            if(g%primes[i]==0)
            {
                cur=0;
                while(g%primes[i]==0)
                {
                    cur++;
                    g/=primes[i];
                }
                cntg+=cur;
            }
            if(g==1)
                break;
        }
        if(g!=1)
            cntg++;
        if(p==1)
        {
            if(k<=cnt1+cnt2+2*cntg)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else if(k>1 && k<=cnt1+cnt2+2*cntg)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}