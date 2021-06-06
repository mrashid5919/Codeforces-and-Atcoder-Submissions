#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[500],mx,ne,z;
    cin>>t;
    while(t--)
    {
        ne=0;
        z=0;
        mx=INT_MIN;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]<0)
                ne=1;
            else if(ara[i]==0)
                z=1;
            else
                mx=max(mx,ara[i]);
        }
        if(ne==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
        if(z==1)
        {
            cout<<mx+1<<"\n";
            for(i=0;i<=mx;i++)
                cout<<i<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<mx<<"\n";
            for(i=1;i<=mx;i++)
                cout<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
