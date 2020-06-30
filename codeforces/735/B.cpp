#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,n1,n2,sum1=0,sum2=0,a[100002],i;
    double ans;
    cin>>n>>n1>>n2;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a, a + n, greater<long long>());
    if(n1>=n2)
    {
        for(i=0;i<n2;i++)
            sum2=sum2+a[i];
        for(i=n2;i<n1+n2;i++)
            sum1=sum1+a[i];
    }
    else
    {
        for(i=0;i<n1;i++)
            sum1=sum1+a[i];
        for(i=n1;i<n1+n2;i++)
            sum2=sum2+a[i];
    }
    ans=((double)sum1/n1)+((double)sum2/n2);
    cout<<setprecision(9)<<ans<<"\n";
    return 0;
}
