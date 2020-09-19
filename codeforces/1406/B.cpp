#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,a,b,c,d,e,f;
    static long long ara[100003];
    cin>>t;
    while(t--)
    {
       a=1;
       b=1;
       c=1;
       d=1;
       e=1;
       f=1;
       cin>>n;
       for(i=0;i<n;i++)
         cin>>ara[i];
       sort(ara,ara+n);
       for(i=0;i<5;i++)
            a=a*ara[i];
       for(i=0;i<4;i++)
            b=b*ara[i];
       b=b*ara[n-1];
       for(i=0;i<3;i++)
            c=c*ara[i];
       c=c*ara[n-1]*ara[n-2];
       for(i=0;i<2;i++)
            d=d*ara[i];
       d=d*ara[n-1]*ara[n-2]*ara[n-3];
       e=ara[0];
       for(i=1;i<=4;i++)
            e=e*ara[n-i];
       for(i=1;i<=5;i++)
            f=f*ara[n-i];
       cout<<max(max(max(max(max(e,f),d),c),b),a)<<"\n";
    }
    return 0;
}
