#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long n,k,i,mn;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=k-1;i<n;i++)
    {
        if(i==k-1)
            mn=ara[i]-ara[i-k+1];
        else
            mn=min(mn,ara[i]-ara[i-k+1]);
    }
    cout<<mn<<"\n";
    return 0;
}