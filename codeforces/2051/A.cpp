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

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,i,dif;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        dif=0;
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>b[i+1])
                dif+=ara[i]-b[i+1];
        }
        dif+=ara[n-1];
        cout<<dif<<"\n";
    }
    return 0;
}