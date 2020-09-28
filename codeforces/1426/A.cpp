#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n==1 || n==2)
            cout<<1<<"\n";
        else
        {
            n=n-2;
            if(n%x==0)
                ans=1+n/x;
            else
                ans=2+n/x;
            cout<<ans<<"\n";
        }
    }
    return 0;
}
