#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,x,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(n<=2)
        {
            cout<<-1<<"\n";
            continue;
        }
        sort(ara,ara+n);
        if(sum>=2*ara[n/2]*n+1)
            cout<<0<<"\n";
        else
            cout<<(2*n*ara[n/2])+1-sum<<"\n";
    }
    return 0;
}