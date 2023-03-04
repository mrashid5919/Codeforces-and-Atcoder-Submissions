#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,low,high,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cout<<1<<" ";
        for(i=1;i<n;i++)
        {
            if(i+1<=ara[0])
            {
                cout<<i+1<<" ";
                continue;
            }
            low=1;
            high=i;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(ara[mid]>=i-mid+1 && ara[mid-1]<i-mid+2)
                {
                    cout<<i-mid+1<<" ";
                    break;
                }
                else if(ara[mid]>=i-mid+1)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
