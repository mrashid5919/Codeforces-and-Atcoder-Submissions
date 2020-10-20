#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[5002],f,s;
    cin>>t;
    while(t--)
    {
        f=1;
        s=-1;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        for(i=2;i<=n;i++)
        {
            if(ara[i]!=ara[f])
            {
                s=i;
                break;
            }
        }
        if(s==-1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
        for(i=2;i<=n;i++)
        {
            if(ara[i]==ara[f])
                cout<<s<<" "<<i<<"\n";
            else
                cout<<f<<" "<<i<<"\n";
        }
    }
    return 0;
}
