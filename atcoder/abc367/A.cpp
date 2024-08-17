#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int a,b,c,i,ara[25]={0};
    cin>>a>>b>>c;
    if(b<c)
    {
        for(i=b;i<=c;i++)
        {
            ara[i]=1;
        }
    }
    else
    {
        for(i=b;i<24;i++)
            ara[i]=1;
        for(i=0;i<=c;i++)
            ara[i]=1;
    }
    if(ara[a]==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}