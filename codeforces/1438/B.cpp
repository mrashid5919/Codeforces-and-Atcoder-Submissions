#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[1005],p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
            {
                cout<<"YES"<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"NO"<<"\n";
    }
    return 0;
}
