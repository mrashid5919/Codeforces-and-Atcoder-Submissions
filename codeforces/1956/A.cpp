#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,k,q,i,ara[105],n[105];
    cin>>t;
    while(t--)
    {
        cin>>k>>q;
        for(i=0;i<k;i++)
            cin>>ara[i];
        for(i=0;i<q;i++)
            cin>>n[i];
        for(i=0;i<q;i++)
        {
            cout<<min(ara[0]-1,n[i])<<" ";
        }
        cout<<"\n";
    }
    return 0;
}