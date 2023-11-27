#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)


int main()
{
    fastio;
    int n,k,i,ara[105];
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=n-1;i>=0;i--)
    {
        if(k%ara[i]==0)
        {
            cout<<k/ara[i]<<"\n";
            break;
        }
    }
    return 0;
}