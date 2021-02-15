#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,d,ara[105],p,j;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>d;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>d)
                p=1;
        }
        if(p==0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ara[i]+ara[j]<=d)
                {
                    p=2;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
