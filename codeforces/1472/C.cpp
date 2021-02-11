#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,mx;
    static long long ara[200006],ans[200006];
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=n;i>=1;i--)
        {
            if(i+ara[i]>n)
                ans[i]=ara[i];
            else
                ans[i]=ara[i]+ans[i+ara[i]];
        }
        for(i=1;i<=n;i++)
            mx=max(mx,ans[i]);
        cout<<mx<<"\n";
    }
    return 0;
}
