#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[500],p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            p=0;
            for(j=0;j<i;j++)
            {
                if(ara[i]%ara[j]==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                break;
        }
        if(p==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
