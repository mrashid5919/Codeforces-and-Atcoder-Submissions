#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long x[105][105][15],y[105][105][15],M=100000000;

int main()
{
    fastio;
    long long n1,n2,l1,l2,i,j,k,ans=0;
    cin>>n1>>n2>>l1>>l2;
    for(i=1;i<=l1;i++)
        x[i][0][i]=1;
    for(i=1;i<=l2;i++)
        y[0][i][i]=1;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            for(k=1;k<=l2;k++)
                x[i][j][1]=(x[i][j][1]+y[i-1][j][k])%M;
            for(k=2;k<=l1;k++)
                x[i][j][k]=x[i-1][j][k-1];
            for(k=1;k<=l1;k++)
                y[i][j][1]=(y[i][j][1]+x[i][j-1][k])%M;
            for(k=2;k<=l2;k++)
                y[i][j][k]=y[i][j-1][k-1];
        }
    }
    for(i=1;i<=l1;i++)
        ans=(ans+x[n1][n2][i])%M;
    for(i=1;i<=l2;i++)
        ans=(ans+y[n1][n2][i])%M;
    cout<<ans<<"\n";
    return 0;
}