#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[2005],ev,od;
    cin>>t;
    while(t--)
    {
        ev=0;
        od=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]%2==0)
                ev++;
            else
                od++;
        }
        if(od%2==1)
            cout<<"YES"<<"\n";
        else if(ev>0 && od>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
