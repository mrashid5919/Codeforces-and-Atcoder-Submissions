#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[300005],dif[300005];

int main()
{
    fastio;
    long long n,k,i,mn=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=1;i<n;i++)
    {
        dif[i-1]=ara[i]-ara[i-1];
    }
    sort(dif,dif+n-1);
    for(i=0;i<n-k;i++)
        mn+=dif[i];
    cout<<mn<<"\n";
    return 0;
}