#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[7][100005];

int main()
{
    fastio;
    int n,q,x,y,p=0;
    cin>>n>>q;
    while(q--)
    {
        cin>>x>>y;
        if(ara[x][y]==0)
            ara[x][y]=1;
        else
            ara[x][y]=0;
        if(ara[x][y]==1)
        {
            if(x==1)
            {
                if(ara[2][y]==1)
                {
                    p++;
                }
                if(y!=1 && ara[2][y-1]==1)
                {
                    p++;
                }
                if(y!=n && ara[2][y+1]==1)
                {
                    p++;
                }
            }
            else
            {
                if(ara[1][y]==1)
                {
                    p++;
                }
                if(y!=1 && ara[1][y-1]==1)
                {
                    p++;
                }
                if(y!=n && ara[1][y+1]==1)
                {
                    p++;
                }
            }
        }
        else
        {
            if(x==1)
            {
                if(ara[2][y]==1)
                {
                    p--;
                }
                if(y!=1 && ara[2][y-1]==1)
                {
                    p--;
                }
                if(y!=n && ara[2][y+1]==1)
                {
                    p--;
                }
            }
            else
            {
                if(ara[1][y]==1)
                {
                    p--;
                }
                if(y!=1 && ara[1][y-1]==1)
                {
                    p--;
                }
                if(y!=n && ara[1][y+1]==1)
                {
                    p--;
                }
            }
        }
        //cout<<p<<"\n";
        if(p==0)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
}
