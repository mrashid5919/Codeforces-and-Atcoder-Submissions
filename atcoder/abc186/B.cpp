#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int h,w,i,j,ara[105][105],mn,ans=0;
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            cin>>ara[i][j];
            if(i==0 && j==0)
                mn=ara[i][j];
            else
                mn=min(mn,ara[i][j]);
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            ans+=ara[i][j]-mn;
    }
    cout<<ans<<"\n";
    return 0;
}
