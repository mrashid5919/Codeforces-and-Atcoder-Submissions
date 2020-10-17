#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,x,i,m=0,e=0,mx;
    double es;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
        {
            if(x>=0)
                mx=x;
            else
                mx=(-1)*x;
        }
        else
        {
            if(x>=0)
                mx=max(mx,x);
            else
                mx=max(mx,(-1)*x);
        }
        if(x>=0)
        {
            m=m+x;
        }
        else
            m=m-x;
        e=e+x*x;
    }
    es=sqrt((double)e);
    cout<<m<<"\n"<<setprecision(12)<<es<<"\n"<<mx<<"\n";
    return 0;
}
