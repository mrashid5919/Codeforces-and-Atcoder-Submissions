#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,high,low,sum,l,r,j;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>l>>r;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                low=n;
                high=0;
                for(j=1;j<=n;j++)
                {
                    if(ara[i]+ara[j]>=l)
                    {
                        low=j;
                        break;
                    }
                }
                for(j=n-1;j>=1;j--)
                {
                    if(ara[i]+ara[j]<=r)
                    {
                        high=j;
                        break;
                    }
                }
            }
            else
            {
                if(low<i+1)
                    low=i+1;
                while(ara[i]+ara[low-1]>=l && low>i+1)
                {
                    low--;
                }
                while(ara[i]+ara[high]>r && high>i)
                    high--;
            }
            if(high==i)
                break;
            if(low==n)
                continue;
            else
                sum+=high-low+1;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
