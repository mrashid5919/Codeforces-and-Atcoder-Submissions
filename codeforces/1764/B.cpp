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
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                g=ara[i];
            else
                g=__gcd(g,ara[i]);
        }
        cout<<(ara[n-1]/g)<<"\n";
    }
    return 0;
}
