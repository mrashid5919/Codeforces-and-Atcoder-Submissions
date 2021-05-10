#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long x[100005];

int main()
{
    fastio;
    long long n,q,m,high,low,mid,i,p;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    cin>>q;
    while(q--)
    {
        p=0;
        cin>>m;
        low=0;
        high=n-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(x[mid]<=m && x[mid+1]>m)
            {
                cout<<mid+1<<"\n";
                p=1;
                break;
            }
            else if(x[mid]<=m)
            {
                if(mid==n-1)
                {
                    cout<<mid+1<<"\n";
                    p=1;
                    break;
                }
                else
                    low=mid+1;
            }
            else
                high=mid-1;
        }
        if(p==0)
            cout<<0<<"\n";
    }
    return 0;
}
