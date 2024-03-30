#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==1)
        {
            for(i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<"\n";
        }
        else if(k==n)
        {
            for(i=1;i<=n;i++)
                cout<<1<<" ";
            cout<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    return 0;
}