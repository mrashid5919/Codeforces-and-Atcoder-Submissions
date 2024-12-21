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
    int ara[10],i;
    for(i=0;i<3;i++)
        cin>>ara[i];
    sort(ara,ara+3);
    if(ara[0]==ara[1] && ara[1]==ara[2])
        cout<<"Yes\n";
    else if(ara[2]==ara[0]+ara[1])
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}