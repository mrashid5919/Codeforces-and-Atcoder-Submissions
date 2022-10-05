#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,ara[105][105],x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            x=n/2-1;
        else
            x=n/2;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=i+x;j++)
            {
                if(j<=n)
                    ara[i][j]=1;
                else
                    ara[j%n][i]=-1;
            }
        }
        if(n%2==0)
        {
            for(i=1;i<=n/2;i++)
            {
                ara[i][i+n/2]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
                cout<<ara[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
