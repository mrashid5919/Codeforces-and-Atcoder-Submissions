#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,g;
    cin>>t;
    while(t--)
    {
        g=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            if(ara[i]==i)
                continue;
            if(g==0)
                g=abs(ara[i]-i);
            else
                g=__gcd(g,abs(ara[i]-i));
        }
        cout<<g<<"\n";
    }
    return 0;
}
