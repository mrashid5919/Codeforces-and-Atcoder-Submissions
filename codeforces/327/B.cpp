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

int main()
{
    fastio;
    int n,i;
    
    cin>>n;
    sieve();
    for(int i=0;i<n;i++)
        cout<<primes[i]<<" ";
    cout<<"\n";
    //cout<<primes.size()<<"\n";
    return 0;
}