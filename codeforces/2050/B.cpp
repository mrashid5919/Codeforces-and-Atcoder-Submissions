#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sm,tg,dif,dif2,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sm=0; p=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sm+=ara[i];
        }
        if(sm%n!=0)
        {
            cout<<"NO\n";
            continue;
        }
        tg=sm/n;
        dif=0; dif2=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                dif+=ara[i]-tg;
            else
                dif2+=ara[i]-tg;
        }
        if(dif!=0 || dif2!=0)
            p=1;
        if(p==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}