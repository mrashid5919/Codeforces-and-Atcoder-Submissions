#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,x,i,mx,ara[60];
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                mx=ara[i];
            else
                mx=max(mx,ara[i]-ara[i-1]);
            if(i==n-1)
                mx=max(mx,2*(x-ara[i]));
        }
        cout<<mx<<"\n";
    }
    return 0;
}