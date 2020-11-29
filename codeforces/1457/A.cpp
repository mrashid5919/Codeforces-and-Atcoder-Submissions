#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,r,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>r>>c;
        cout<<max(m-c+r-1,max(n-r+c-1,max(r+c-2,n+m-r-c)))<<"\n";
    }
    return 0;
}
