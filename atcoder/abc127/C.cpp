#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,m,l,r,mn,mx;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        if(i==0)
        {
            mn=l;
            mx=r;
        }
        else
        {
            mn=max(mn,l);
            mx=min(mx,r);
        }
    }
    if(mx<mn)
        cout<<0<<"\n";
    else
        cout<<mx-mn+1<<"\n";
}