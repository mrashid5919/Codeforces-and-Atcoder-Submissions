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
    long long t,n,i,ara[100],b[100],c,g;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                b[c]=ara[i];
                c++;
            }
            else if(ara[i]!=ara[i-1])
            {
                b[c]=ara[i];
                c++;
            }
        }
        if(c==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=1;i<c;i++)
        {
            if(i==1)
                g=b[i]-b[i-1];
            else
                g=gcd(g,b[i]-b[i-1]);
        }
        cout<<g<<"\n";
    }
    return 0;
}
