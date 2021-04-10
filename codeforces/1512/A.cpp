#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[105],idx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                if(ara[i]!=ara[i+1])
                {
                    if(ara[i+1]!=ara[i+2])
                    {
                        idx=i+1;
                    }
                    else
                        idx=i;
                    break;
                }
            }
            else if(ara[i]!=ara[i-1])
            {
                idx=i;
                break;
            }
        }
        cout<<idx<<"\n";
    }
    return 0;
}
