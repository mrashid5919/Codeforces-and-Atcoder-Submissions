#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long sum[200005];

int main()
{
    fastio;
    long long t,n,i,j,x;
    for(i=1;i<=200000;i++)
    {
        x=i;
        while(x!=0)
        {
            sum[i]+=x%10;
            x/=10;
        }
        sum[i]+=sum[i-1];
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<sum[n]<<"\n";
    }
    return 0;
}