#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long n,i,ans=0,c=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        ara[i]=ara[i]%200;
    }
    sort(ara,ara+n);
    for(i=1;i<n;i++)
    {
        if(ara[i]==ara[i-1])
        {
            c++;
            if(i==n-1)
            {
                ans=ans+(c*(c-1))/2;
                c=1;
            }
        }
        else
        {
            ans=ans+(c*(c-1))/2;
            c=1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
