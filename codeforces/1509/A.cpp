#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[2005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(ara[i]%2==1)
                cout<<ara[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]%2==0)
                cout<<ara[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
