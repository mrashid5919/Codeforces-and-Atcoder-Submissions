#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005];

int main()
{
    fastio;
    long long n,i,sum=0;
    cin>>n;
    for(i=0;i<3*n;i++)
        cin>>ara[i];
    sort(ara,ara+3*n);
    for(i=1;i<=n;i++)
        sum+=ara[3*n-(i*2)];
    cout<<sum<<"\n";
}
