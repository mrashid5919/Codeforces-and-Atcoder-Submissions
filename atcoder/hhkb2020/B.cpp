#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int h,w,i,j,ans=0;
    char ara[103][103];
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<h-1;i++)
    {
        for(j=0;j<w;j++)
        {
            if(ara[i][j]=='.' && ara[i+1][j]=='.')
                ans++;
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w-1;j++)
        {
            if(ara[i][j]=='.' && ara[i][j+1]=='.')
                ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
