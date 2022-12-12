#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,p,flag,dir,x,y;
    char ara[10][200005];
    bool vis[10][200005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        flag=0;
        for(i=0; i<2; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>ara[i][j];
                vis[i][j]=false;
            }
        }
        /*for(i=0; i<2; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==0 && ara[i][j]=='B')
                {
                    if(j==0 && ara[i][j+1]=='W' && ara[i+1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                    if(j==n-1 && ara[i][j-1]=='W' && ara[i+1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                    if(j!=0 && j!=n-1 && ara[i][j-1]=='W' && ara[i][j+1]=='W' && ara[i+1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                }
                if(i==1 && ara[i][j]=='B')
                {
                    if(j==0 && ara[i][j+1]=='W' && ara[i-1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                    if(j==n-1 && ara[i][j-1]=='W' && ara[i-1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                    if(j!=0 && j!=n-1 && ara[i][j-1]=='W' && ara[i][j+1]=='W' && ara[i-1][j]=='W')
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO\n";
            continue;
        }*/
        if(ara[0][0]=='B')
        {
            x=0;
            y=0;
            vis[0][0]=true;
        }
        else
        {
            x=1;
            y=0;
            vis[1][0]=true;
        }
        while(true)
        {
            if(x==0)
            {
                if(vis[1][y]==false && ara[1][y]=='B')
                {
                    x=1;
                    vis[1][y]=true;
                }
                else
                {
                    if(y==n-1)
                        break;
                    if(y<n-1 && ara[0][y+1]=='B')
                    {
                        vis[0][y+1]=true;
                        y++;
                    }
                    else
                    {
                        p=1;
                        break;
                    }
                }
            }
            else if(x==1)
            {
                if(vis[0][y]==false && ara[0][y]=='B')
                {
                    x=0;
                    vis[0][y]=true;
                }
                else
                {
                    if(y==n-1)
                        break;
                    if(y<n-1 && ara[1][y+1]=='B')
                    {
                        vis[1][y+1]=true;
                        y++;
                    }
                    else
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        if(ara[0][0]=='B' && ara[1][0]=='B' && p==1)
        {
            for(i=0;i<2;i++)
            {
                for(j=0;j<n;j++)
                    vis[i][j]=false;
            }
            x=1;
            y=0;
            vis[1][0]=true;
        while(true)
        {
            if(x==0)
            {
                if(vis[1][y]==false && ara[1][y]=='B')
                {
                    x=1;
                    vis[1][y]=true;
                }
                else
                {
                    if(y==n-1){
                        p=0;
                        break;
                    }
                    if(y<n-1 && ara[0][y+1]=='B')
                    {
                        vis[0][y+1]=true;
                        y++;
                    }
                    else
                    {
                        p=1;
                        break;
                    }
                }
            }
            else if(x==1)
            {
                if(vis[0][y]==false && ara[0][y]=='B')
                {
                    x=0;
                    vis[0][y]=true;
                }
                else
                {
                    if(y==n-1){
                        p=0;
                        break;
                    }
                    if(y<n-1 && ara[1][y+1]=='B')
                    {
                        vis[1][y+1]=true;
                        y++;
                    }
                    else
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
