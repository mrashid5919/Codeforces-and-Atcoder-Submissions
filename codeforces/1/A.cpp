#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,a,ans=0;
    cin>>n>>m>>a;
    if(n%a==0)
        ans=n/a;
    else
        ans=(n/a)+1;
    if(m%a==0)
        ans=ans*(m/a);
    else
        ans=ans*(m/a+1);
    cout<<ans<<"\n";
    return 0;
}
