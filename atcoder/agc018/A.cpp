#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

long long gcd(long long x,long long y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    fastio;
    long long n,k,i,g;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    g=ara[0];
    for(i=0;i<n;i++)
        g=gcd(g,ara[i]);
    if(k%g==0 && k/g<=ara[n-1]/g)
        cout<<"POSSIBLE";
    else
        cout<<"IMPOSSIBLE";
    return 0;
}
