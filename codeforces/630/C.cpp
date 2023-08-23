#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x=1,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x*=2;
        ans+=x;
    }
    cout<<ans<<"\n";
    return 0;
}