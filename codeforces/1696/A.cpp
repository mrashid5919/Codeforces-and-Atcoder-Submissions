#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,z,ara[2500],ans,mx;
    cin>>t;
    while(t--)
    {
        mx=INT_MIN;
        cin>>n>>z;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mx=max(mx,ara[i]);
            mx=max(mx,z|ara[i]);
        }
        cout<<mx<<"\n";
    }
    return 0;
}
