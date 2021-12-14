#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long gcd(long long x,long long y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    fastio;
    long long t,n,i,ara[500],gc1,gc2,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        gc1=ara[0];
        gc2=ara[1];
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                gc1=gcd(gc1,ara[i]);
            else
                gc2=gcd(gc2,ara[i]);
        }
        for(i=1;i<n;i=i+2)
        {
            if(ara[i]%gc1==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<gc1<<"\n";
            continue;
        }
        p=0;
        for(i=0;i<n;i=i+2)
        {
            if(ara[i]%gc2==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            cout<<gc2<<"\n";
            continue;
        }
        cout<<0<<"\n";
    }
    return 0;
}
