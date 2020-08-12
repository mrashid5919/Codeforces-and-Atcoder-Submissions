#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    io;
    int n,a,b,c,i,ara[4004];
    cin>>n>>a>>b>>c;
    for(i=0;i<=n;i++)
    {
        if(i==a || i==b || i==c)
            ara[i]=1;
        else
            ara[i]=0;
    }
    for(i=min(min(a,b),c);i<=n;i++)
    {
        if(i-a>=0 && ara[i-a]>0)
            ara[i]=max(ara[i],ara[i-a]+1);
        if(i-b>=0 && ara[i-b]>0)
            ara[i]=max(ara[i],ara[i-b]+1);
        if(i-c>=0 && ara[i-c]>0)
            ara[i]=max(ara[i],ara[i-c]+1);
        //cout<<ara[i]<<" ";
    }
    cout<<ara[n]<<endl;
    return 0;
}
