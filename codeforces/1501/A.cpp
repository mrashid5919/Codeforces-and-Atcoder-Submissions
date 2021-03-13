#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,a[105],b[105],c[105],ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<n;i++)
            cin>>c[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                ans=ans+a[i]+c[i];
            else
                ans=ans+a[i]-b[i-1]+c[i];
            if(i!=n-1)
                ans=max(b[i],ans+(b[i]-a[i])/2+(b[i]-a[i])%2);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
