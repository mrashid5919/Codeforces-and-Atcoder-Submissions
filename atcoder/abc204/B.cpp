#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ara[1005],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=max(0LL,ara[i]-10);
    }
    cout<<sum<<"\n";
    return 0;
}
