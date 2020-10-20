#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,ans=1,i;
    cin>>n;
    for(i=2;i<n;i++)
        ans=ans*i;
    ans=ans/(n/2);
    cout<<ans;
    return 0;
}
