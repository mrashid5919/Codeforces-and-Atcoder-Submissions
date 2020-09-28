#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,p,ara[300][4],i,j,k;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            for(j=2*i-1;j<=2*i;j++)
            {
                for(k=1;k<=2;k++)
                    cin>>ara[j][k];
            }
        }
        if(m%2==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(ara[2*i-1][2]==ara[2*i][1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
