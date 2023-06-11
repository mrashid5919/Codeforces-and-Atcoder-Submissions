#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

long long ara[500005],ans1[500005],ans2[500005],sv[10000005];
vector<long long> primes;

void sieve()
{
    for(long long i=2;i*i<=10000000;i++)
    {
        if(sv[i]==0)
        {
            for(long long j=i*i;j<=10000000;j+=i)
                sv[j]=1;
        }
    }
    for(long long i=2;i<=10000000;i++)
    {
        if(sv[i]==0)
            primes.push_back(i);
    }
}

int main()
{
    fastio;
    sieve();
    long long n,i,j,k,x,mul,cnt;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    map<long long,long long> mp;
    for(i=0;i<n;i++)
    {
        if(mp[ara[i]])
        {
            ans1[i]=ans1[mp[ara[i]]-1];
            ans2[i]=ans2[mp[ara[i]]-1];
            continue;
        }
        mp[ara[i]]=i+1;
        mul=1;
        cnt=0;
        //vector<long long> vect;
        for(j=0;primes[j]*primes[j]<=ara[i];j++)
        {
            if(ara[i]%primes[j]==0)
            {
                cnt++;
                mul*=primes[j];
                while(ara[i]%primes[j]==0)
                    ara[i]/=primes[j];
            }
            if(ara[i]==1){
                x=primes[j];
                break;
            }
        }
        if(ara[i]!=1)
        {
            //vect.push_back(ara[i]);
            cnt++;
            mul*=ara[i];
            x=ara[i];
        }
        if(cnt<=1)
        {
            ans1[i]=-1;
            ans2[i]=-1;
            continue;
        }
        /*if(ara[i]!=1)
            vect.push_back(ara[i]);
        for(j=0;j<vect.size();j++)
            cout<<vect[j]<<" ";
        cout<<"\n";*/
        /*for(j=0;j<vect.size();j++)
        {
            for(k=j+1;k<vect.size();k++)
            {
                if(j==0 && k==vect.size()-1)
                    cout<<__gcd(vect[j]+vect[k],x)<<"\n";
                if(__gcd(vect[j]+vect[k],x)==1)
                {
                    ans1[i]=vect[j];
                    ans2[i]=vect[k];
                    break;
                }
            }
            if(ans1[i])
                break;
        }
        if(ans1[i]==0)
        {
            ans1[i]=-1;
            ans2[i]=-1;
        }*/
        ans1[i]=mul/x;
        ans2[i]=x;
    }
    for(i=0;i<n;i++)
        cout<<ans1[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
        cout<<ans2[i]<<" ";
    cout<<"\n";
    return 0;
}
