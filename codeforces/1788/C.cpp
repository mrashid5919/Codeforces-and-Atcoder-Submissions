#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(i=1;i<=n;i+=2)
            cout<<i<<" "<<2*n-(n/2)-i/2<<"\n";
        for(i=2;i<=n;i+=2)
            cout<<i<<" "<<2*n-i/2+1<<"\n";
    }
    return 0;
}
