#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long s[200005],f[200005],d[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];
        for(i=0;i<n;i++)
            cin>>f[i];
        d[0]=f[0]-s[0];
        for(i=1;i<n;i++)
        {
            if(s[i]>=f[i-1])
                d[i]=f[i]-s[i];
            else
                d[i]=f[i]-f[i-1];
        }
        for(i=0;i<n;i++)
            cout<<d[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
