// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n,m,i,j,cnt=0,vis[200]={0},mx;
    char ara[200][200];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>ara[i][j];
    }
    for(j=0;j<m;j++)
    {
        mx=0;
        for(i=0;i<n;i++)
        {
            mx=max(mx,(ara[i][j]-'0'));
        }
        for(i=0;i<n;i++)
        {
            if(ara[i][j]=='0'+mx && vis[i]==0)
            {
                cnt++;
                vis[i]=1;
            }
        }
    }
    cout<<cnt;
    return 0;
}