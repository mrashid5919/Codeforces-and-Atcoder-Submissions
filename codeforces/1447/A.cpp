#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n<<"\n";
        for(i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
