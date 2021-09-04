#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200005],b[200005];

int main()
{
    fastio;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    for(i=1;i<=n;i++)
    {
        b[ara[i]]=i;
    }
    for(i=1;i<=n;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
    return 0;
}
