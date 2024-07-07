#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}