#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[50005];

int main()
{
    fastio;
    long long t,n,i,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(i==0)
                mx=max(ara[i],ara[i+1])-1;
            else
                mx=min(mx,max(ara[i],ara[i+1])-1);
        }
        cout<<mx<<"\n";
    }
    return 0;
}