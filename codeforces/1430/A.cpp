#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,k,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<=n/3;i++)
        {
            for(j=0;j<=n/3;j++)
            {
                for(k=0;k<=n/3;k++)
                {
                    if(3*i+5*j+7*k==n)
                    {
                        cout<<i<<" "<<j<<" "<<k<<"\n";
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    break;
            }
            if(p==1)
                break;
        }
        if(p==0)
            cout<<"-1"<<"\n";
    }
    return 0;
}
