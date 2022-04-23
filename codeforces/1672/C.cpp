#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
            {
                if(l==0)
                    l=i;
                r=i;
            }
        }
        if(l==0)
            cout<<0<<"\n";
        else if(l==r)
            cout<<0<<"\n";
        else
            cout<<max(1LL,r-l-1)<<"\n";
    }
    return 0;
}
