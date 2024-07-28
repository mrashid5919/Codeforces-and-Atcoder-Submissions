#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[200],mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i+=2)
        {
            if(i==0)
                mx=ara[i];
            else
                mx=max(mx,ara[i]);
        }
        cout<<mx<<"\n";
    }
    return 0;
}