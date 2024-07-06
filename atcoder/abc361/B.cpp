#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int i,j,ara[5][10],a=0,b=0,c=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<6;j++)
            cin>>ara[i][j];
    }
    for(i=1;i<=1000;i++)
    {
        if((i>=ara[0][0] && i<=ara[0][3]) && (i>=ara[1][0] && i<=ara[1][3]))
        {
            a++;
        }
        if((i>=ara[0][1] && i<=ara[0][4]) && (i>=ara[1][1] && i<=ara[1][4]))
        {
            b++;
        }
        if((i>=ara[0][2] && i<=ara[0][5]) && (i>=ara[1][2] && i<=ara[1][5]))
        {
            c++;
        }
    }
    if(a>1 && b>1 && c>1)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}