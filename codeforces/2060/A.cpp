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

int main()
{
    fastio;
    long long t,a,b,c1,c2,c3,d,e;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>d>>e;
        c1=a+b;
        c2=d-b;
        c3=e-d;
        if(c1==c2 && c2==c3)
            cout<<3<<"\n";
        else if(c1==c2 || c2==c3 || c1==c3)
            cout<<2<<"\n";
        else
            cout<<1<<"\n";
    }
    return 0;
}