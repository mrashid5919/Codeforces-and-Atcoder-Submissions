#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    long long t,n,i,ans=0;
    static long long ara[200002];
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>ara[i+1])
                ans=ans+ara[i]-ara[i+1];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
