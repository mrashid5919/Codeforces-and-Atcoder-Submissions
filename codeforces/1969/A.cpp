#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,p,ara[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
        {
            if(ara[ara[i]]==i)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<2<<"\n";
        else
            cout<<3<<"\n";
    }
    return 0;
}