#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l,a,b,i,ara[1003],max;
    double c;
    cin>>n>>l;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    a=ara[0]-0;
    b=l-ara[n-1];
    for(i=0;i<n-1;i++)
    {
        if(i==0)
            max=ara[i+1]-ara[i];
        else if(max<ara[i+1]-ara[i])
            max=ara[i+1]-ara[i];
    }
    c=(double)max/2;
    if(a>c && a>=b)
        cout<<a;
    else if(b>=a && b>c)
        cout<<b;
    else
        cout<<setprecision(10)<<c;
    return 0;
}
