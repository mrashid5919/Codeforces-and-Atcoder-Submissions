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
    long long t,n,k,i,sum,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        sum=0;
        l=0; r=n-1;
        while(l<r)
        {
            if(ara[l]+ara[r]==k)
            {
                sum++;
                l++;
                r--;
            }
            else if(ara[l]+ara[r]<k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}