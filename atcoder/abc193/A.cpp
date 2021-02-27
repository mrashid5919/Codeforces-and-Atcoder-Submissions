#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b;
    double ans;
    cin>>a>>b;
    ans=(double)100*(a-b)/a;
    cout<<ans<<"\n";
    return 0;
}
