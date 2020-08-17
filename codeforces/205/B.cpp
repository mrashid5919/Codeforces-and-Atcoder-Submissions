#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long n,i,ara[100002],ans=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    if(n==1)
        ans=0;
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>ara[i+1])
            {
                ans=ans+ara[i]-ara[i+1];
            }
        }
    }
    cout<<ans;
    return 0;
}
