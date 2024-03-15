#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,ara[100],p,prv;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        p=0;
        if(ara[0]%10<ara[0]/10)
            prv=ara[0];
        else
            prv=ara[0]%10;
        for(i=1;i<n;i++)
        {
            //cout<<i<<"\n";
            if(ara[i]%10<ara[i]/10)
            {
                if(ara[i]<prv)
                {
                    p=1;
                    break;
                }
                else
                    prv=ara[i];
            }
            else if(ara[i]/10<prv)
            {
                if(ara[i]<prv)
                {
                    p=1;
                    break;
                }
                else
                    prv=ara[i];
            }
            else
                prv=ara[i]%10;
        }
        if(p==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}