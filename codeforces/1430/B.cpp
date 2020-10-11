#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,k;
    static long long ara[200004];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        for(i=1;i<=k;i++)
            ara[0]=ara[0]+ara[i];
        cout<<ara[0]<<"\n";
    }
    return 0;
}
