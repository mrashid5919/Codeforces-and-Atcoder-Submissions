#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

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
            cin>>ara[i];
        if(n%2==0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>=ara[i+1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
