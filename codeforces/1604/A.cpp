#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[1000],x;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
        {
            if(ara[i]>i+x)
                x+=ara[i]-(x+i);
        }
        cout<<x<<"\n";
    }
    return 0;
}
