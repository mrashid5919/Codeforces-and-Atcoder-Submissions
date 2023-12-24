#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[105],pos,neg,z;
    cin>>t;
    while(t--)
    {
        pos=0; neg=0; z=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]>0)
                pos++;
            else if(ara[i]<0)
                neg++;
            else
                z++;
        }
        if(z>0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(neg%2==1)
        {
            cout<<0<<"\n";
            continue;
        }
        else
        {
            cout<<1<<"\n";
            cout<<1<<" "<<0<<"\n";
        }
    }
    return 0;
}