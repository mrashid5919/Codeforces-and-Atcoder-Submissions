#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        m=0;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            if(abs(ara[i]-i)%k!=0)
                m++;
        }
        if(m==0)
            cout<<0<<"\n";
        else if(m==2)
            cout<<1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
