#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,x,y;
    char ara[15][15];
    cin>>t;
    while(t--)
    {
        for(i=1;i<=8;i++)
        {
            for(j=1;j<=8;j++)
                cin>>ara[i][j];
        }
        for(i=2;i<=7;i++)
        {
            for(j=2;j<=7;j++)
            {
                if(ara[i][j]=='#')
                {
                    if(ara[i-1][j-1]=='#' && ara[i-1][j+1]=='#' && ara[i+1][j-1]=='#' && ara[i+1][j+1]=='#')
                    {
                        x=i;
                        y=j;
                    }
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
