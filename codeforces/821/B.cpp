#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long m,b,i,mx,x;
    cin>>m>>b;
    for(i=b;i>=0;i--)
    {
        x=(b-i)*m;
        if(i==b)
            mx=(i+1)*(x*(x+1))/2+(x+1)*(i*(i+1))/2;
        else
            mx=max(mx,(i+1)*(x*(x+1))/2+(x+1)*(i*(i+1))/2);
        /*if(x==0)
            mx=(i*(i+1))/2;
        if(i==0)
            mx=max(mx,(x*(x+1))/2);*/
        //cout<<i<<" "<<mx<<"\n";
    }
    cout<<mx<<"\n";
    return 0;
}