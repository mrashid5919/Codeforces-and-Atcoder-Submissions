#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,ara[10];
    cin>>t;
    while(t--)
    {
        //cin>>n;
        for(i=0;i<3;i++)
            cin>>ara[i];
        sort(ara,ara+3);
        int ans=(ara[1]-ara[0])+(ara[2]-ara[1]);
        cout<<ans<<"\n";
    }
    return 0;
}