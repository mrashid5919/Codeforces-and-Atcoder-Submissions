#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[200005];

int main()
{
    fastio;
    long long t,n,d,i;
    cin>>t;
    while(t--)
    {
        for(i=1;i<5;i++)
        {
            ara[i]=0;
        }
        cin>>n>>d;
        ara[0]=1;
        if(d==5)
            ara[2]=1;
        if(d%3==0)
        {
            ara[1]=1;
            if(d==9)
                ara[4]=1;
            else if(n>=3)
                ara[4]=1;
        }
        else
        {
            if(n>=3)
                ara[1]=1;
            if(n>=6)
                ara[4]=1;
        }
        if(d==7)
            ara[3]=1;
        else
        {
            if(n>=3)
                ara[3]=1;
        }
        for(i=0;i<5;i++)
        {
            if(ara[i]==1)
            {
                cout<<2*i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}