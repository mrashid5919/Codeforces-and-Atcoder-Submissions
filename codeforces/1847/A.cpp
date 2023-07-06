#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,ara[200],dif[200],ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i>0)
                dif[i-1]=abs(ara[i]-ara[i-1]);
        }
        sort(dif,dif+n-1);
        ans=0;
        for(i=0;i<n-k;i++)
            ans+=dif[i];
        cout<<ans<<"\n";
    }
    return 0;
}