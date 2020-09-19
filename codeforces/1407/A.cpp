#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[1003],zero,one;
    cin>>t;
    while(t--)
    {
        zero=0;
        one=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
                zero++;
            else
                one++;
        }
        if(zero>=n/2)
        {
            cout<<zero<<"\n";
            for(i=0;i<zero;i++)
                cout<<0<<" ";
            cout<<"\n";
        }
        else
        {
            if(one%2==1)
            {
                one=one-1;
            }
            cout<<one<<"\n";
            for(i=0;i<one;i++)
                cout<<1<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
