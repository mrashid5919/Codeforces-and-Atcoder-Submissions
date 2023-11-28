#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005],ps[100005];

int main()
{
    fastio;
    long long n,i,p,sm=0,cur=0,low,high,mid;
    p=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ara[i];
        sm+=ara[i];
        if(i==0)
            ps[0]=ara[i];
        else
            ps[i]=ps[i-1]+ara[i];
    }
    if(sm%2==1)
    {
        cout<<"NO\n";
        return 0;
    }
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ps[mid]==sm/2)
        {
            p=1;
            break;
        }
        else if(ps[mid]<sm/2)
            low=mid+1;
        else
            high=mid-1;
    }
    if(p==1)
    {
        cout<<"YES\n";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        low=i;
        high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ps[mid]==sm/2+ara[i])
            {
                p=1;
                break;
            }
            else if(ps[mid]<sm/2+ara[i])
                low=mid+1;
            else
                high=mid-1;
        }
        if(p==1)
            break;
        low=0;
        high=i-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ps[mid]==sm/2-ara[i])
            {
                p=1;
                break;
            }
            else if(ps[mid]<sm/2-ara[i])
                low=mid+1;
            else
                high=mid-1;
        }
        if(p==1)
            break;
    }
    if(p==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}