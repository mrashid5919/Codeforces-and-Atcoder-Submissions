#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        mx=0;
        sort(ara,ara+n);
        if(ara[0]==ara[n-1])
        {
            cout<<n/2<<"\n";
            continue;
        }
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                mx=max(mx,i*(n-i));
        }
        for(i=n-2;i>=0;i--)
        {
            if(ara[i]!=ara[i+1])
                mx=max(mx,(n-1-i)*(i+1));
        }
        mx=max(mx,n-1);
        cout<<mx<<"\n";
    }
    return 0;
}
