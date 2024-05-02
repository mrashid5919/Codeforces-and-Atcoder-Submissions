#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,x[600],ans[600];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n;i++)
            cin>>x[i];
        ans[0]=x[1]+1;
        for(i=1;i<n-1;i++)
        {
            ans[i]=(1+(x[i+1]/ans[i-1]))*ans[i-1]+x[i];
        }
        ans[n-1]=ans[n-2]+x[n-1];
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}