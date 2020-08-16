#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long t,n,k,i,mx;
    static long long ara[200003],arb[200003];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                mx=ara[i];
            else if(ara[i]>mx)
                mx=ara[i];
        }
        for(i=0;i<n;i++)
        {
            ara[i]=mx-ara[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
                mx=ara[i];
            else if(ara[i]>mx)
                mx=ara[i];
        }
        for(i=0;i<n;i++)
            arb[i]=mx-ara[i];
        if(k%2==1)
        {
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
        }
        else
        {
            for(i=0;i<n;i++)
                cout<<arb[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
