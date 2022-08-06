#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

/*vector<int> primes;
int ara[1000005];

void sieve()
{
    for(int i=2;i*i<=1000000;i++)
    {
        if(ara[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i)
                ara[j]=1;
        }

    }
    primes.push_back(1);
    for(int i=2;i<=1000000;i++)
    {
        if(ara[i]==0)
            primes.push_back(i);
    }
}*/

long long k[100005],l[100005];

int main()
{
    fastio;
    long long n,f,i,sum=0;
    vector<pair<long long,long long> > vect;
    cin>>n>>f;
    for(i=0;i<n;i++)
    {
        cin>>k[i]>>l[i];
        if(min(2*k[i],l[i])>min(k[i],l[i]))
            vect.push_back(make_pair(min(2*k[i],l[i])-min(k[i],l[i]),i));
        else
            vect.push_back(make_pair(0LL,i));
    }
    sort(vect.begin(),vect.end());
    for(i=0;i<f;i++)
        k[vect[n-1-i].second]*=2;
    for(i=0;i<n;i++)
    {
        sum+=min(k[i],l[i]);
    }
    cout<<sum<<"\n";
    return 0;
}
