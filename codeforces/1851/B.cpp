#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],b[200005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            b[i]=ara[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(ara[i]%2!=b[i]%2)
            {
                p=1;
                break;
            }
        }
        if(p)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}