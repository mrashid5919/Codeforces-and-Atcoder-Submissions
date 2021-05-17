#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[100],p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]!=i+1)
                p=1;
        }
        if(p==0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(ara[0]==1 || ara[n-1]==n)
            cout<<1<<"\n";
        else if(ara[0]==n && ara[n-1]==1)
            cout<<3<<"\n";
        else
            cout<<2<<"\n";
    }
    return 0;
}
