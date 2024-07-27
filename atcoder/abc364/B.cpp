#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,m,i,j,x,y;
    char ara[100][100];
    string s;
    cin>>n>>m;
    cin>>x>>y;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>ara[i][j];
        }
    }
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='U')
        {
            if(x>1 && ara[x-1][y]!='#')
            {
                x--;
            }
        }
        else if(s[i]=='D')
        {
            if(x<n && ara[x+1][y]!='#')
            {
                x++;
            }
        }
        else if(s[i]=='L')
        {
            if(y>1 && ara[x][y-1]!='#')
            {
                y--;
            }
        }
        else if(s[i]=='R')
        {
            if(y<m && ara[x][y+1]!='#')
            {
                y++;
            }
        }
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}