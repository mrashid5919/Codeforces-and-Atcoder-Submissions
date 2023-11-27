#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,ara[200],mx[200],mn[200],pos,neg;
    cin>>t;
    while(t--)
    {
        pos=0;
        neg=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            if(ara[i]>0)
                pos++;
            else
                neg++;
        }
        for(i=1;i<=pos;i++)
            mx[i]=i;
        for(i=pos+1;i<=n;i++)
            mx[i]=mx[i-1]-1;
        for(i=1;i<=2*neg;i++)
            mn[i]=i%2;
        for(i=2*neg+1;i<=n;i++)
            mn[i]=i-2*neg;
        for(i=1;i<=n;i++)
            cout<<mx[i]<<" ";
        cout<<"\n";
        for(i=1;i<=n;i++)
            cout<<mn[i]<<" ";
        cout<<"\n";
    }
    return 0;
}