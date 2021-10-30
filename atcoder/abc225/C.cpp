#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[10005][15];

int main()
{
    fastio;
    int n,m,i,j,flag=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0)
            {
                if(ara[i][j]%7==0 && j!=m-1)
                {
                    flag=1;
                    break;
                }
                if(j==m-1)
                    continue;
                if((ara[i][j+1]-ara[i][j])!=1)
                {
                    flag=1;
                    break;
                }
            }
            else if(ara[i][j]-ara[i-1][j]!=7)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
