#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[103],ans[103];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            ans[i]=ara[n-1-i];
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
