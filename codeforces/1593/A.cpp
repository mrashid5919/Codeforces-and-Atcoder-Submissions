#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<max(0LL,max(b,c)-a+1)<<" "<<max(0LL,max(a,c)-b+1)<<" "<<max(0LL,max(a,b)-c+1)<<"\n";
    }
    return 0;
}
