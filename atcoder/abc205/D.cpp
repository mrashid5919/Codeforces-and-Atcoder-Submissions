#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005],s[100005];

int main()
{
    fastio;
    long long n,q,i,k,low,high,mid;
    cin>>n>>q;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            b[i]=ara[i]-1;
            s[i]=ara[i]-1;
        }
        else
        {
            b[i]=ara[i]-ara[i-1]-1;
            s[i]=s[i-1]+b[i];
        }
    }
    for(i=0;i<q;i++)
    {
        cin>>k;
        if(k<ara[0])
        {
            cout<<k<<"\n";
            continue;
        }
        if(k>s[n-1])
        {
            cout<<ara[n-1]+k-s[n-1]<<"\n";
            continue;
        }
        low=0;
        high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(s[mid]>=k && s[mid-1]<k)
            {
                cout<<ara[mid]-(s[mid]-k+1)<<"\n";
                break;
            }
            else if(s[mid]>=k)
                high=mid-1;
            else
                low=mid+1;
        }
    }
    return 0;
}
