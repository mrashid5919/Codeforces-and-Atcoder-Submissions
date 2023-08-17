#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,m,k,a1,ak;
    cin>>t;
    while(t--)
    {
        cin>>m>>k>>a1>>ak;
        if(a1>=m)
        {
            cout<<0<<"\n";
            continue;
        }
        long long x=a1;
        long long y=(m-a1)/k;
        long long r=(m-a1)%k;
        if(r==0)
        {
            cout<<max(0LL,y-ak)<<"\n";
            continue;
        }
        if(k-r<=x)
        {
            cout<<min(max(0LL,y-ak)+r,max(0LL,y+1-ak))<<"\n";
            continue;
        }
        else
            cout<<max(0LL,y-ak)+r<<"\n";
    }
    return 0;
}