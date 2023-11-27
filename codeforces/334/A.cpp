#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,j,ara[105][105];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            ara[i][j]=(i-1)*(n/2)+j;
        }
        for(j=n/2+1;j<=n;j++)
            ara[i][j]=n*n-ara[i][j-n/2]+1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<ara[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}