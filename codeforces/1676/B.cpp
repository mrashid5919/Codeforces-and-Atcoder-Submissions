#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[100],sum,mn;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mn=min(mn,ara[i]);
        }
        for(i=0;i<n;i++)
            sum+=ara[i]-mn;
        cout<<sum<<"\n";
    }
    return 0;
}
