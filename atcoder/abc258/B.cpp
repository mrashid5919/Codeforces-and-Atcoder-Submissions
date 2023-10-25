#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,k,l,mx=0,sm;
    char ara[50][50];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
            ara[i][j+n]=ara[i][j]; ara[i][j+2*n]=ara[i][j];
            ara[n+i][j]=ara[i][j]; ara[n+i][j+n]=ara[i][j]; ara[n+i][j+2*n]=ara[i][j];
            ara[2*n+i][j]=ara[i][j]; ara[2*n+i][j+n]=ara[i][j]; ara[2*n+i][j+2*n]=ara[i][j];
        }
    }
    for(i=n;i<2*n;i++)
    {
        for(j=n;j<2*n;j++)
        {
            sm=0;
            //right
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i][j+k]-'0');
            mx=max(sm,mx);

            sm=0;
            //left
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i][j-k]-'0');
            mx=max(sm,mx);

            sm=0;
            //down
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i+k][j]-'0');
            mx=max(sm,mx);

            sm=0;
            //up
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i-k][j]-'0');
            mx=max(sm,mx);

            sm=0;
            //up right
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i-k][j+k]-'0');
            mx=max(mx,sm);

            sm=0;
            //up left
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i-k][j-k]-'0');
            mx=max(mx,sm);

            sm=0;
            //down right
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i+k][j+k]-'0');
            mx=max(mx,sm);

            sm=0;
            //down left
            for(k=0;k<n;k++)
                sm=(sm*10)+(ara[i+k][j-k]-'0');
            mx=max(mx,sm);
        }
    }
    cout<<mx<<"\n";
    return 0;
}
