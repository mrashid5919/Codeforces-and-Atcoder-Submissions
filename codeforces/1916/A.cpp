#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i,ara[15],prod;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        prod=1;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            prod*=ara[i];
        }
        if(2023%prod!=0)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<2023/prod<<" ";
        for(i=0;i<k-1;i++)
            cout<<1<<" ";
        cout<<"\n";
    }
    return 0;
}