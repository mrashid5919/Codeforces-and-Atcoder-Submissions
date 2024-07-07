#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long dif[505][505];
char a[505][505],b[505][505];

int main()
{
    fastio;
    long long t,n,m,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>b[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                dif[i][j]=(b[i][j]-a[i][j]+3)%3;
            }
        }
        p=0;
        for(i=0;i<m;i++)
        {
            int x=0;
            for(j=0;j<n;j++)
            {
                x+=dif[j][i];
            }
            if(x%3!=0)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
        {
            for(i=0;i<n;i++)
            {
                int x=0;
                for(j=0;j<m;j++)
                {
                    x+=dif[i][j];
                }
                if(x%3!=0)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}