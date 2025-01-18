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
    long long x,mul=1,i;
    cin>>x;
    for(i=1;;i++)
    {
        mul*=i;
        if(mul==x)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}