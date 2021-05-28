#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],ans[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<2*n;i++)
            cin>>ara[i];
        sort(ara,ara+2*n);
        for(i=0;i<n;i++)
            ans[2*i]=ara[i];
        for(i=n;i<2*n;i++)
            ans[2*(i-n)+1]=ara[i];
        for(i=0;i<2*n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
