#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,sum=0,j,x;
    static long long ara[200005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n,greater<long long>());
    for(i=0;i<n;i++)
    {
        if(i==0)
            x=n-1;
        else
            x=x-2;
        sum+=x*ara[i];
    }
    cout<<sum<<"\n";
    return 0;
}
