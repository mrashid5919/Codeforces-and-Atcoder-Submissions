#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,ans=0;
    cin>>n>>m;
    if(m>=2*n)
    {
        m-=2*n;
        ans+=n;
    }
    else
    {
        ans+=m/2;
        m=0;
    }
    ans+=m/4;
    cout<<ans<<"\n";
    return 0;
}