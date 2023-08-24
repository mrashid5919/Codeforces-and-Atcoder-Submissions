#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,low,high,mid,x,dif;
    cin>>t;
    while(t--)
    {
        cin>>n;
        low=1;
        high=2648956421;
        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid*(mid+1))/2<=n && ((mid+1)*(mid+2))/2>n)
            {
                x=mid;
                break;
            }
            else if((mid*(mid+1))/2<=n)
                low=mid+1;
            else
                high=mid-1;
        }
        dif=n-(x*(x+1))/2;
        cout<<x+1+dif<<"\n";
    }
    return 0;
}