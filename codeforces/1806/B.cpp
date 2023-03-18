#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,z,nz;
    cin>>t;
    while(t--)
    {
        z=0;
        nz=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
                z++;
            else if(ara[i]!=1)
                nz=1;
        }
        if(z<=n-z+1)
            cout<<0<<"\n";
        else if(nz==1 || z==n)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
    return 0;
}
