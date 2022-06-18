#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,j,ar,mx,ara[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ar=INT_MAX;
        mx=INT_MIN;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>ara[i][j];
                mx=max(mx,ara[i][j]);
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(ara[i][j]==mx)
                {
                    long long tempx=max(i,n-i+1);
                    long long tempy=max(j,m-j+1);
                    ar=min(ar,tempx*tempy);
                }
            }
        }
        cout<<ar<<"\n";
    }
    return 0;
}
