#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,high,mid,low;
    static long long ara[100003];
    ara[0]=1;
    for(i=1;i<=63245;i++)
    {
        ara[i]=ara[i-1]+i/2+i%2;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        low=0;
        high=63244;
        while(high>=low)
        {
           mid=(low+high)/2;
           if(ara[mid]<=n && ara[mid+1]>n)
           {
               cout<<mid<<"\n";
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
