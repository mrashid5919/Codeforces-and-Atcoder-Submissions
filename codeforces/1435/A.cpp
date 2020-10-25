#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[104],b[104];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n/2;i++)
        {
            if(ara[i]>0 && ara[n+1-i]>0)
            {
                b[i]=ara[n+1-i];
                b[n+1-i]=(-1)*ara[i];
            }
            else if(ara[i]>0 && ara[n+i-1]<0)
            {
                b[i]=(-1)*ara[n+1-i];
                b[n+1-i]=ara[i];
            }
            else if(ara[i]<0 && ara[n+1-i]>0)
            {
                b[i]=(-1)*ara[n+1-i];
                b[n+1-i]=ara[i];
            }
            else
            {
                b[i]=ara[n+1-i];
                b[n+1-i]=(-1)*ara[i];
            }
        }
        for(i=1;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
