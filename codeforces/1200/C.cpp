#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,m,q,g,ara[10],i,nm[10];
    cin>>n>>m>>q;
    g=__gcd(n,m);
    nm[1]=n;
    nm[2]=m;
    while(q--)
    {
        for(i=0;i<4;i++)
            cin>>ara[i];
        if((ara[1]-1)/(nm[ara[0]]/g)==(ara[3]-1)/(nm[ara[2]]/g))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}