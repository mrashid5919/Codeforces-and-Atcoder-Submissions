#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,y,sum=0;
    static long long a[100005],b[100005],c[100005],p[100005],q[100005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
        cin>>c[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    y=n-1;
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            while(c[y]>b[i])
            {
                if(y<0)
                    break;
                y--;
            }
            p[i]=n-1-y;
        }
        else
        {
            while(c[y]>b[i])
            {
                if(y<0)
                    break;
                y--;
            }
            p[i]=p[i+1]+n-1-y;
        }
    }
    y=n-1;
    for(i=n-1;i>=0;i--)
    {
        while(b[y]>a[i])
        {
            if(y<0)
                break;
            y--;
        }
        q[i]=n-1-y;
    }
    p[n]=0;
    /*for(i=0;i<n;i++)
        cout<<q[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
        cout<<p[i]<<" ";*/
    for(i=0;i<n;i++)
        sum+=p[n-q[i]];
    cout<<sum<<"\n";
    return 0;
}
