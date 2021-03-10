#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,k,i,me,mx,high,low,mid,p,d,count;
    cin>>t;
    while(t--)
    {
        p=0;
        count=1;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        mx=ara[n-1];
        for(i=0;i<n;i++)
        {
            if(i==0 && ara[i]!=0)
            {
                p=1;
                me=0;
                break;
            }
            else if(ara[i]-ara[i-1]>1)
            {
                p=1;
                me=ara[i-1]+1;
                break;
            }
        }
        for(i=1;i<n;i++)
        {
            if(ara[i]!=ara[i-1])
                count++;
        }
        if(p==0)
        {
            cout<<count+k<<"\n";
            continue;
        }
        if(k==0)
        {
            cout<<count<<"\n";
            continue;
        }
        if((me+mx)%2==1)
            d=(me+mx+1)/2;
        else
            d=(me+mx)/2;
        low=0;
        high=n-1;
        int q=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ara[mid]==d)
            {
                q=1;
                break;
            }
            else if(ara[mid]<d)
                low=mid+1;
            else
                high=mid-1;
        }
        if(q==0)
            cout<<count+1<<"\n";
        else
            cout<<count<<"\n";
    }
    return 0;
}
