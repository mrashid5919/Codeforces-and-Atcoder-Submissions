#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,m,i,j,ara[505][505],b[505][505],r[505]={0},c[505]={0},p=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]!=b[i][j])
            {
                r[i]++;
                c[j]++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(r[i]%2!=0)
        {
            p=1;
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        if(c[i]%2!=0)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
    return 0;
}
