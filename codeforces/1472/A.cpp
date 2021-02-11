#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long d=1,i;
        for(i=0;i<y;i++)
            d=d*x;
        return d;
    }
}

int main()
{
    fastio;
    long long t,w,h,n,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            count++;
            w/=2;
        }
        while(h%2==0)
        {
            count++;
            h/=2;
        }
        if(power(2,count)>=n)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
