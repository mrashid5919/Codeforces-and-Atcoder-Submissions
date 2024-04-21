#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,k,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==1)
        {
            cout<<k<<"\n";
            continue;
        }
        x=1;
        for(i=1;;i++)
        {
            x*=2;
            if(x-1>k)
            {
                x/=2;
                break;
            }
        }
        cout<<x-1<<" "<<k-x+1<<" ";
        for(i=2;i<n;i++)
            cout<<0<<" ";
        cout<<"\n";
    }
    return 0;
}