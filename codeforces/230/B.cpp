#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    long long n,i,j,ara[100002],count=0,p,high,low,mid;
    static long long a[1000002];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    a[0]=2;
    for(i=3;i<1000000;i=i+2)
    {
        p=0;
        for(j=3;j*j<=i;j=j+2)
        {
            if(i%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            count++;
            a[count]=i;
        }
    }
    for(i=0;i<n;i++)
    {
        p=0;
        low=0;
        high=count;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]*a[mid]==ara[i])
            {
                p=1;
                break;
            }
            else if(ara[i]>a[mid]*a[mid])
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        if(p==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
