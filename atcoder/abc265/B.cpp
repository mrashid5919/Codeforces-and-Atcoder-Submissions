#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long n,m,t,i,x,y,flag=0;
    cin>>n>>m>>t;
    for(i=0;i<n-1;i++)
        cin>>ara[i];
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        b[x-1]=y;
    }
    for(i=0;i<n-1;i++)
    {
        t+=b[i];
        t-=ara[i];
        if(t<=0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}