#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[505],b[505],p,l,r;
    cin>>t;
    while(t--)
    {
        p=-1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(ara[i]!=i+1)
            {
                p=i;
                break;
            }
        }
        if(p==-1)
        {
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
            continue;
        }
        l=p;
        for(i=p+1;i<n;i++)
        {
            if(ara[i]==p+1)
            {
                r=i;
                break;
            }
        }
        for(i=0;i<=r-l;i++)
            b[l+i]=ara[r-i];
        for(i=0;i<n;i++)
        {
            if(i<l || i>r)
                b[i]=ara[i];
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
