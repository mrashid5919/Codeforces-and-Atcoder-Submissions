#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[1005],cur,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cur=0;
        for(i=0;i<n;i++)
        {
            d=cur/ara[i];
            cur=(d+1)*ara[i];
        }
        cout<<cur<<"\n";
    }
    return 0;
}