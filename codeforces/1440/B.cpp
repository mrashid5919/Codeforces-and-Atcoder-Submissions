#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,sum;
    static long long ara[1000003];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        for(i=0; i<n*k; i++)
            cin>>ara[i];
        for(i=1; i<=k; i++)
            sum=sum+ara[n*k-i*(n/2+1)];

        cout<<sum<<"\n";
    }
    return 0;
}
