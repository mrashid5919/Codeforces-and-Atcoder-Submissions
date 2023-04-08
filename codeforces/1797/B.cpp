#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,k,i,j,mn;
    char ara[1005][1005];
    cin>>t;
    while(t--)
    {
        mn=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n/2;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ara[i][j]!=ara[n-1-i][n-1-j])
                    mn++;
            }
        }
        if(n%2==1)
        {
            for(j=0;j<n/2;j++)
            {
                if(ara[n/2][j]!=ara[n/2][n-1-j])
                    mn++;
            }
        }
        if(k<mn)
            cout<<"NO\n";
        else
        {
            if(n%2==0)
            {
                if((k-mn)%2==0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
