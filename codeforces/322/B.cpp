#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long ara[10],i,ans,j;
    for(i=0;i<3;i++)
        cin>>ara[i];
    sort(ara,ara+3);
    ans=ara[0]+(ara[1]-ara[0])/3+(ara[2]-ara[0])/3;
    for(i=1;i<=min(ara[0],2LL);i++)
    {
        for(j=0;j<2;j++)
        {
            ans=max(ans,ara[0]-i+(ara[1]-ara[0]+i)/3+(ara[2]-ara[0]+i)/3);
        }
    }
    cout<<ans<<"\n";
    return 0;
}