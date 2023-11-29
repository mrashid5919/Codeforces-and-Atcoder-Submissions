#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,ara[105],ans[105];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        ans[ara[i]]=i;
    }
    for(i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}