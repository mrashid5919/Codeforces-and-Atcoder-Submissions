#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long M=1000000007;

long long power(long long a, long long b) {
    long long res = 1;
    for(long long i=0;i<b;i++)
        res=(res*a)%M;
    return res;
}

int main()
{
    fastio;
    long long t,n,m,k,i,x,ara[100],ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=0;
        m=k;
        ans=0;
        while(m!=0)
        {
            ara[x]=m%2;
            x++;
            m/=2;
        }
        for(i=0;i<x;i++)
        {
            if(ara[i]==1)
                ans=((ans%M)+power(n,i))%M;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
