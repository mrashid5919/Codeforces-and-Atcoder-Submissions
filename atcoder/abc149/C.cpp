#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200005];

int main()
{
    fastio;
    int n=200000,i,j,x;
    cin>>x;
    for(i=2;i*i<=n;i++)
    {
        if(ara[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
                ara[j]=1;
        }
    }
    for(i=x;i<=n;i++)
    {
        if(ara[i]==0)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
