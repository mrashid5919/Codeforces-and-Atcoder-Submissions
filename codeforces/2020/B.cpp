#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,k,low,high,mid;
    cin>>t;
    while(t--)
    {
        cin>>k;
        if(k==1)
        {
            cout<<2<<"\n";
            continue;
        }
        low=0;
        high=1000000000;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(1+mid*(mid+1)<=k && 1+(mid+1)*(mid+2)>k)
            {
                cout<<k+mid+1<<"\n";
                break;
            }
            else if(1+mid*(mid+1)>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    return 0;
}