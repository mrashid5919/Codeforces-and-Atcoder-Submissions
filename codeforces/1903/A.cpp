#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i,p,ara[200];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES\n";
        else if(k==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}