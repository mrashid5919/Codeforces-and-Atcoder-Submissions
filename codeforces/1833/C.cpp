#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mn,ev,od;
    cin>>t;
    while(t--)
    {
        ev=0;
        od=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                mn=ara[i];
            else
                mn=min(mn,ara[i]);
            if(ara[i]%2)
                od++;
            else
                ev++;
        }
        if(mn%2==0 && od>0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
