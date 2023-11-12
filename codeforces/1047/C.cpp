#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<int> primes;

int araa[15000005],cnt[1000005];


void sieve()
{
    
    for(int i=2;i*i<=15000000;i++)
    {
        if(araa[i]==0)
        {
            for(int j=i*i;j<=15000000;j+=i)
            {
                araa[j]=1;
            }
        }
        
    }
    for(int i=2;i<=15000000;i++)
    {
        if(araa[i]==0)
            primes.push_back(i);
    }
}


int ara[300005];

int main()
{
    fastio;
    int n,i,j,x,g,l;
    int mx=0;
    //map<long long,long long> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i==0)
            g=ara[i];
        else
            g=__gcd(g,ara[i]);
    }
    sieve();
    //cout<<primes.size()<<"\n";
    int sz=primes.size();
    //cout<<sz<<"\n";
    for(i=0;i<n;i++)
    {
        //cout<<i<<endl;
        x=ara[i]/g;
        l=0;
        for(j=0;primes[j]*primes[j]<=x;j++)
        {
            if(x%primes[j]==0)
            {
                cnt[j]++;
                mx=max(mx,cnt[j]);
                while(x%primes[j]==0)
                    x/=primes[j];
            }
            if(x==1)
                break;
            l=j;
        }
        if(x!=1)
        {
            int low,high,mid;
            low=0;
            high=sz-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(primes[mid]==x)
                {
                    cnt[mid]++;
                    mx=max(mx,cnt[mid]);
                    break;
                }
                else if(primes[mid]<x)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
    }
    //cout<<mx<<endl;
    if(mx==0)
        cout<<-1<<"\n";
    else
    {
        // map<long long,long long>::iterator it;
        // for(it=mp.begin();it!=mp.end();it++)
        // {
        //     mx=max(mx,(it->second));
        // }
        cout<<n-mx<<"\n";
    }
    return 0;
}