//Incomplete
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,ans,d,r,prev;
    cin>>n>>m;
    ans=n+n/m;
    prev=n;
    while(true)
    {
        if(ans/m-prev/m==0)
            break;
        long long temp=ans;
        ans=ans+ans/m-prev/m;
        prev=temp;
    }
    cout<<ans<<"\n";
    return 0;
}
