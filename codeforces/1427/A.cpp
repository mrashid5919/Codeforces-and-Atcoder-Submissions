//Incomplete
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[53],pos,neg;
    cin>>t;
    while(t--)
    {
        pos=0;
        neg=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>=0)
                pos=pos+ara[i];
            else
                neg=neg-ara[i];
        }
        sort(ara,ara+n);
        if(pos==neg)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        if(pos>neg)
        {
            for(i=n-1;i>=0;i--)
                cout<<ara[i]<<" ";
        }
        else
        {
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
