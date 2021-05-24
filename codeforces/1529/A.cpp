#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[105],ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(ara[i]==ara[0])
                ans++;
            else
                break;
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}
