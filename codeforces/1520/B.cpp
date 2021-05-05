#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,count,x,ara[100],high,mid,low;
    count=0;
    x=1;
    for(i=0;i<9;i++)
    {
        for(j=1;j<=9;j++)
        {
            ara[count]=j*x;
            count++;
        }
        x=(x*10)+1;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=999999999)
        {
            cout<<count<<"\n";
            continue;
        }
        low=0;
        high=count-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ara[mid]<=n && ara[mid+1]>n)
            {
                cout<<mid+1<<"\n";
                break;
            }
            else if(ara[mid]<n)
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return 0;
}
