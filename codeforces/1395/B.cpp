#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,i,j,count=1;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    for(j=1;j<=m;j++)
    {
        if(j==y)
            continue;
        cout<<x<<" "<<j<<endl;
    }
    for(i=x+1;i<=n;i++)
    {
        if(count%2==1)
        {
            for(j=m;j>=1;j--)
                cout<<i<<" "<<j<<endl;
        }
        else
        {
            for(j=1;j<=m;j++)
                cout<<i<<" "<<j<<endl;
        }
        count++;
    }
    for(i=1;i<x;i++)
    {
        if(count%2==1)
        {
            for(j=m;j>=1;j--)
                cout<<i<<" "<<j<<endl;
        }
        else
        {
            for(j=1;j<=m;j++)
                cout<<i<<" "<<j<<endl;
        }
        count++;
    }
    return 0;
}
