#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int vis[600][600];

int main()
{
    int h,w,i,j,curi=0,curj=0,flag=0,step=0;
    char ara[600][600];
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            cin>>ara[i][j];
    }
    vis[0][0]=1;
    while(true)
    {
        if(curi==0 && ara[curi][curj]=='U')
            break;
        if(curi==h-1 && ara[curi][curj]=='D')
            break;
        if(curj==0 && ara[curi][curj]=='L')
            break;
        if(curj==w-1 && ara[curi][curj]=='R')
            break;
        if(ara[curi][curj]=='U')
            curi--;
        else if(ara[curi][curj]=='D')
            curi++;
        else if(ara[curi][curj]=='L')
            curj--;
        else if(ara[curi][curj]=='R')
            curj++;
        step++;
        if(vis[curi][curj]==1)
        {
            flag=1;
            break;
        }
        vis[curi][curj]=1;
        //cout<<curi<<" "<<curj<<"\n";
    }
    if(flag==1)
        cout<<-1<<"\n";
    else
        cout<<curi+1<<" "<<curj+1<<"\n";
    return 0;
}