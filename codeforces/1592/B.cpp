#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long t,n,x,i,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            b[i]=ara[i];
        }
        sort(b,b+n);
        l=n-x;
        r=x-1;
        bool check=true;
        for(i=l;i<=r;i++)
        {
            if(ara[i]!=b[i])
            {
                check=false;
                break;
            }
        }
        if(check)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
