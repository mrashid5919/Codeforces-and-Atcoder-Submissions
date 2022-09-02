#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,k,r,c,i,j,temp;
    char ara[510][510];
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>r>>c;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                ara[i][j]='.';
        }
        for(i=r-1;i<r+n-1;i++)
        {
            temp=(c+i-r)%n;
            ara[i%n][temp]='X';
            j=(temp+k)%n;
            while(j!=temp)
            {
                ara[i%n][j%n]='X';
                j=(j+k)%n;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<ara[i][j];
            cout<<"\n";
        }
    }
}
