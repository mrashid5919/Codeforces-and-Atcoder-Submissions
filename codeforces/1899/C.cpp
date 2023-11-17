#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mx,l,r,sc,j;
    cin>>t;
    while(t--)
    {
        mx=-1000000000;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        l=0;
        r=-1;
        sc=0;
        for(i=1;i<n;i++)
        {
            if(abs(ara[i]%2)==abs(ara[i-1]%2) || i==n-1)
            {
                // if(i==l && i!=n-1)
                // {
                //     continue;
                // }
                if(i==n-1 && abs(ara[i]%2)!=abs(ara[i-1]%2))
                    r=i;
                else
                    r=i-1;
                //cout<<l<<" "<<r<<"\n";
                sc=0;
                for(j=l;j<=r;j++)
                {
                    sc+=ara[j];
                    mx=max(sc,mx);
                    if(sc<0)
                        sc=0;
                }
                sc=0;
                l=i;
            }
        }
        mx=max(mx,ara[n-1]);
        cout<<mx<<"\n";
    }
    return 0;
}