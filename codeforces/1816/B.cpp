#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[10][100005];

int main()
{
    fastio;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<n;i+=2)
        {
            ara[0][i]=i;
            ara[1][i-1]=i+1;
        }
        ara[0][0]=2*n-1;
        ara[1][n-1]=2*n;
        for(i=2;i<n;i+=2)
        {
            ara[0][i]=2*n-1-i;
            ara[1][i-1]=2*n-i;
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
                cout<<ara[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
