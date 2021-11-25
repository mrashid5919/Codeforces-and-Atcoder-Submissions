#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(ara[0]!=n && ara[n-1]!=n)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=n-1;i>=0;i--)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
