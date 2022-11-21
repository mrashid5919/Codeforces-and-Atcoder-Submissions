#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,p,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        l=0;
        r=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(ara[r]<ara[r+1])
                {
                    //cout<<l<<" "<<r<<"\n";
                    p++;
                }
            }
            else
            {
                if(ara[i]==ara[i-1])
                    r++;
                else
                {
                    l=i;
                    r=i;
                }
                if((ara[l-1]>ara[l] || l==0) && (ara[r]<ara[r+1] || r==n-1))
                {
                    //cout<<l<<" "<<r<<"\n";
                    p++;
                }
            }
        }
        //cout<<p<<"\n";
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
