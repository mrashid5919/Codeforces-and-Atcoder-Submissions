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
    long long t,n,i,j,ara[2005],ev,b[2005],od,tot;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ev=0;
        od=0;
        tot=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]%2==0)
            {
                b[ev]=ara[i];
                ev++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]%2==1)
            {
                b[ev+od]=ara[i];
                od++;
            }
        }
        for(i=0;i<ev;i++)
        {
            tot=tot+(n-1-i);
        }
        for(i=0;i<od-1;i++)
        {
            for(j=i+1;j<od;j++)
            {
                if(gcd(b[ev+i],b[ev+j])>1)
                    tot++;
            }
        }
        cout<<tot<<"\n";
    }
    return 0;
}
