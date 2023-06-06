#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mn,x,low,high,mid,target;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        if(n<=3)
        {
            cout<<0<<"\n";
            continue;
        }
        mn=1000000000000;
        for(i=0;i<n;i++)
        {
            x=(ara[i]-ara[0])/2+(ara[i]-ara[0])%2;
            low=i+1;
            high=n-1;
            target=(ara[i+1]+ara[n-1])/2;
            if(ara[high]==target)
                mid=high;
            else
            {
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(ara[mid]<=target && ara[mid+1]>target)
                    {
                        break;
                    }
                    else if(ara[mid]<=target)
                        low=mid+1;
                    else
                        high=mid-1;
                }
            }
            x=max(x,min(max((ara[mid]-ara[i+1])/2+(ara[mid]-ara[i+1])%2,(ara[n-1]-ara[mid+1])/2+(ara[n-1]-ara[mid+1])%2),max((ara[mid-1]-ara[i+1])/2+(ara[mid-1]-ara[i+1])%2,(ara[n-1]-ara[mid])/2+(ara[n-1]-ara[mid])%2)));
            mn=min(mn,x);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
