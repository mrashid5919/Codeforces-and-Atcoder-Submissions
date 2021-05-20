#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1,i;
    for(i=1;i<=y;i++)
        u=u*x;
    return u;
}

int main()
{
    fastio;
    long long t,n,i,ara[100],low,high,mid,count;
    for(i=0;;i++)
    {
        if(power(2,i)-1>1e9)
        {
            count=i;
            break;
        }
        else
            ara[i]=power(2,i)-1;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(ara[count-1]<n)
        {
            cout<<ara[count-1]<<"\n";
            continue;
        }
        low=0;
        high=count-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ara[mid]<n && ara[mid+1]>=n)
            {
                cout<<ara[mid]<<"\n";
                break;
            }
            else if(ara[mid]<n)
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return 0;
}
