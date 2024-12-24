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
    long long t,n,i,p,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=1;
        for(i=0;;i++)
        {
            if(x>n)
            {
                p=i-1;
                break;
            }
            x*=4;
        }
        cout<<power(2,p)<<"\n";
    }
    return 0;
}