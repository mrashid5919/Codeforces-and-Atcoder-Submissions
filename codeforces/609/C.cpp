#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long n,i,tot=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);
    for(i=n-1;i>=0;i--)
    {
        if(i<n-(sum%n))
        {
            tot+=abs(ara[i]-(sum/n));
        }
        else
        {
            tot+=abs(ara[i]-(sum/n+1));
        }
    }
    cout<<tot/2<<"\n";
    return 0;
}