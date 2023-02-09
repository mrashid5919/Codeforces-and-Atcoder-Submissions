#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,f,ara[1005],pr[1005],sf[1005];
    cin>>t;
    while(t--)
    {
        f=-1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(ara[i]==2)
                    pr[i]=1;
                else
                    pr[i]=0;
            }
            else
            {
                if(ara[i]==2)
                    pr[i]=pr[i-1]+1;
                else
                    pr[i]=pr[i-1];
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                if(ara[i]==2)
                    sf[i]=1;
                else
                    sf[i]=0;
            }
            else
            {
                if(ara[i]==2)
                    sf[i]=sf[i+1]+1;
                else
                    sf[i]=sf[i+1];
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(pr[i]==sf[i+1])
            {
                f=i+1;
                break;
            }
        }
        cout<<f<<"\n";
    }
    return 0;
}
