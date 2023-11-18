#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,ara[200];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n,greater<int>());
    for(i=1;i<n;i++)
    {
        if(ara[i]!=ara[i-1])
        {
            cout<<ara[i];
            break;
        }
    }
    return 0;
}