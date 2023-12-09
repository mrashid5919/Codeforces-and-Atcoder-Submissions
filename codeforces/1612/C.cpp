#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long sm(long long n,long long k)
{
    long long ans=0,x;
    if(n<=k)
        ans=(n*(n+1))/2;
    else
    {
        ans=(k*(k+1))/2;
        x=n-k;
        ans+=(k*(k-1))/2-((k-x)*(k-1-x))/2;
    }
    return ans;
}

int main()
{
    fastio;
    long long t,k,x,low,high,mid;
    cin>>t;
    while(t--)
    {
        cin>>k>>x;
        if(x>=sm(2*k-1,k))
        {
            cout<<2*k-1<<"\n";
            continue;
        }
        low=1;
        high=2*k-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(sm(mid-1,k)<x && sm(mid,k)>=x)
            {
                cout<<mid<<"\n";
                break;
            }
            else if(sm(mid-1,k)<x)
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return 0;
}