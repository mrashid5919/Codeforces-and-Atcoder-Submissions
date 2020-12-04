#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i,j,ans,ara[105],arr[105],high,low,mid;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<m;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            low=0;
            high=m-1;
            while(high>=low)
            {
                mid=(low+high)/2;
                if(arr[mid]==ara[i])
                {
                    ans++;
                    break;
                }
                else if(arr[mid]>ara[i])
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
