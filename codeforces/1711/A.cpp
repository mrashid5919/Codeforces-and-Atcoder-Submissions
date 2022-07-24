#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2;i<=n;i++)
            cout<<i<<" ";
        cout<<1<<"\n";
    }
    return 0;
}
