#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long a[200005],b[200005];

int main()
{
    fastio;
    long long n,x,y,p,q,i;
    cin>>n>>x>>y;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n,greater<long long>());
    sort(b,b+n,greater<long long>());
    for(i=0;i<n;i++)
    {
        if(i==0 && a[i]>x)
        {
            p=1;
            break;
        }
        else
        {
            a[i]+=a[i-1];
            if(a[i]>x)
            {
                p=i+1;
                break;
            }
        }
        if(i==n-1)
            p=n;
    }
    for(i=0;i<n;i++)
    {
        if(i==0 && b[i]>y)
        {
            q=1;
            break;
        }
        else
        {
            b[i]+=b[i-1];
            if(b[i]>y)
            {
                q=i+1;
                break;
            }
        }
        if(i==n-1)
            q=n;
    }
    cout<<min(p,q)<<"\n";
    return 0;
}