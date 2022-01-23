#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[400005];

int main()
{
    fastio;
    int n,i,x;
    cin>>n;
    for(i=0;i<4*n-1;i++)
    {
        cin>>x;
        ara[x]++;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]==3)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
