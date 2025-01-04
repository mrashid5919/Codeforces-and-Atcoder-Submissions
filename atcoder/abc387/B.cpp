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
    int n,sum=2025,i,j;
    cin>>n;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i*j==n)
            {
                sum-=n;
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}