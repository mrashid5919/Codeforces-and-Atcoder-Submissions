#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[500005];

int main()
{
    fastio;
    long long t,n,i,q,x,high,low,mid;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<long long>());
        for(i=1;i<n;i++)
            ara[i]+=ara[i-1];
        while(q--)
        {
            cin>>x;
            low=0;
            high=n-1;
            if(x>ara[n-1])
            {
                cout<<-1<<"\n";
                continue;
            }
            if(x<=ara[0])
            {
                cout<<1<<"\n";
                continue;
            }
            while(low<=high)
            {
                mid=(low+high)/2;
                if(ara[mid]>=x && ara[mid-1]<x)
                {
                    cout<<mid+1<<"\n";
                    break;
                }
                else if(ara[mid]<x)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
    }
    return 0;
}
