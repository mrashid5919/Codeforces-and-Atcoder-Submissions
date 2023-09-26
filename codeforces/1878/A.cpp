#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,k,i,p,x;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==k)
                p=1;
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}