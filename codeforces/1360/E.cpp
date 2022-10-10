#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,p;
    char ara[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ara[i][j]=='1')
                {
                    if(i==n-1 || j==n-1)
                        continue;
                    if(ara[i][j+1]!='1' && ara[i+1][j]!='1')
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
