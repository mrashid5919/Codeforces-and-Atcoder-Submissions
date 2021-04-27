#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,m,a[1005],b[1005],c[1005],count=0,i,j,p,high,mid,low;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        p=0;
        low=0;
        high=m-1;
        while(high>=low)
        {
            mid=(low+high)/2;
            if(b[mid]==a[i])
            {
                p=1;
                break;
            }
            else if(b[mid]>a[i])
                high=mid-1;
            else
                low=mid+1;
        }
        if(p==0)
        {
            c[count]=a[i];
            count++;
        }
    }
    for(i=0;i<m;i++)
    {
        p=0;
        low=0;
        high=n-1;
        while(high>=low)
        {
            mid=(low+high)/2;
            if(a[mid]==b[i])
            {
                p=1;
                break;
            }
            else if(a[mid]>b[i])
                high=mid-1;
            else
                low=mid+1;
        }
        if(p==0)
        {
            c[count]=b[i];
            count++;
        }
    }
    sort(c,c+count);
    for(i=0;i<count;i++)
        cout<<c[i]<<" ";
    return 0;
}
