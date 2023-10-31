//Took help
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[132000],t[550000];

void build(int v,int tl,int tr,int op)
{
    if(tr==tl)
    {
        t[v]=ara[tr];
    }
    else
    {
        int nextop=op^1;
        int tm=(tl+tr)/2;
        build(v*2,tl,tm,nextop);
        build(v*2+1,tm+1,tr,nextop);
        if(op==1)
            t[v]=t[v*2]|t[v*2+1];
        else
            t[v]=t[v*2]^t[v*2+1];
    }
}

void update(int v,int tl,int tr,int pos,int val,int op)
{
    if(tl==tr)
    {
        t[v]=val;
        ara[pos]=val;
    }
    else
    {
        int tm=(tl+tr)/2;
        int nextop=op^1;
        if(pos<=tm)
            update(v*2,tl,tm,pos,val,nextop);
        else
            update(v*2+1,tm+1,tr,pos,val,nextop);
        if(op==1)
            t[v]=t[v*2]|t[v*2+1];
        else
            t[v]=t[v*2]^t[v*2+1];
    }
}

int main()
{
    fastio;
    int n,m,np;
    cin>>n>>m;
    np=(1<<n);
    for(int i=0;i<np;i++)
        cin>>ara[i];
    build(1,0,np-1,n%2);
    while(m--)
    {
        int p,val;
        cin>>p>>val;
        p--;
        update(1,0,np-1,p,val,n%2);
        cout<<t[1]<<"\n";
    }
    return 0;
}