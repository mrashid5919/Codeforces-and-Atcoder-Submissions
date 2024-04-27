#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

char ara[505][505];

int main()
{
    fastio;
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>ara[i][j];
        }
        if(n==1)
        {
            if(ara[0][0]!=ara[0][m-1])
            {
                cout<<"NO\n";
            }
            else
                cout<<"YES\n";
            continue;
        }
        if(m==1)
        {
            if(ara[0][0]!=ara[n-1][0])
            {
                cout<<"NO\n";
            }
            else
                cout<<"YES\n";
            continue;
        }
        if(ara[0][0]==ara[n-1][m-1] || ara[0][m-1]==ara[n-1][0])
        {
            cout<<"YES\n";
            continue;
        }
        if(ara[0][0]==ara[0][m-1])
        {
            int f=0;
            for(i=0;i<m;i++)
            {
                if(ara[n-1][i]==ara[0][0])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES\n";
                continue;
            }
        }
        if(ara[0][0]==ara[n-1][0])
        {
            int f=0;
            for(i=0;i<n;i++)
            {
                if(ara[i][m-1]==ara[0][0])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES\n";
                continue;
            }
        }
        if(ara[0][m-1]==ara[n-1][m-1])
        {
            int f=0;
            for(i=0;i<n;i++)
            {
                if(ara[i][0]==ara[0][m-1])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES\n";
                continue;
            }
        }
        if(ara[n-1][0]==ara[n-1][m-1])
        {
            int f=0;
            for(i=0;i<m;i++)
            {
                if(ara[0][i]==ara[n-1][0])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES\n";
                continue;
            }
        }
        cout<<"NO\n";
    }
    return 0;
}