#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,x,y,n,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        ans1=(a-min(a-x,n))*(b-min(b-y,n-min(a-x,n)));
        ans2=(b-min(b-y,n))*(a-min(a-x,n-min(b-y,n)));
        cout<<min(ans1,ans2)<<"\n";
    }
    return 0;
}
