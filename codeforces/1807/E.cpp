#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,m,i,low,mid,high;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        ara[0]=0;
        for(i=1;i<=n;i++)
            ara[i]+=ara[i-1];
        low=1;
        high=n;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            cout<<"? "<<mid-low+1<<" ";
            for(i=low;i<=mid;i++)
                cout<<i<<" ";
            cout<<endl;
            long long x;
            cin>>x;
            if(low==mid && ara[low]-ara[low-1]<x)
            {
                cout<<"! "<<low<<endl;
                break;
            }
            if(x==ara[mid]-ara[low-1])
                low=mid+1;
            else
                high=mid;
        }
    }
    return 0;
}
