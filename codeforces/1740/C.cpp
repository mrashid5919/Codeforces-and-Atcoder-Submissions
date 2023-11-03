//Editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,ans,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                mx=ara[n-1]+ara[i+1]-2*ara[i];
                continue;
            }
            if(i>1)
                mx=max(mx,2*ara[i]-ara[0]-ara[i-1]);
            if(i<n-2)
                mx=max(mx,ara[n-1]+ara[i+1]-2*ara[i]);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
