#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[105][105];

int main()
{
    fastio;
    long long t,n,m,i,j;
    cin>>t;
    while(t--)
    {
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
                int x=0;
                if(i==0)
                    x++;
                if(i==n-1)
                    x++;
                if(j==0)
                    x++;
                if(j==m-1)
                    x++;
                if(i>0 && ara[i][j]>ara[i-1][j])
                    x++;
                if(i<n-1 && ara[i][j]>ara[i+1][j])
                    x++;
                if(j>0 && ara[i][j]>ara[i][j-1])
                    x++;
                if(j<m-1 && ara[i][j]>ara[i][j+1])
                    x++;
                if(x==4)
                {
                    long long val=-1;
                    if(i>0)
                        val=max(val,ara[i-1][j]);
                    if(i<n-1)
                        val=max(val,ara[i+1][j]);
                    if(j>0)
                        val=max(val,ara[i][j-1]);
                    if(j<m-1)
                        val=max(val,ara[i][j+1]);
                    ara[i][j]=val;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cout<<ara[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}