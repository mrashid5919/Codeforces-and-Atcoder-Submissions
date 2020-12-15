#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ans,high,low,mid,x,p;
    static long long ara[200005];
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=0;i<n-2;i++)
        {
            if(ara[n-1]-ara[i]<=2)
            {
                x=n-i-2;
                ans=ans+(x*(x+1))/2;
            }
            else
            {
                p=0;
                low=i+2;
                high=n-2;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if((ara[mid]-ara[i])<=2 && (ara[mid+1]-ara[i])>2)
                    {
                        p=1;
                        break;
                    }
                    else if(ara[mid]-ara[i]>2)
                        high=mid-1;
                    else if(ara[mid]-ara[i]<=2)
                        low=mid+1;
                }
                if(p==1)
                {
                    x=mid-i-1;
                    ans=ans+(x*(x+1))/2;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
