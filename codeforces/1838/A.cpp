#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ara[200],p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        if(ara[0]<0)
            cout<<ara[0]<<"\n";
        else
            cout<<ara[n-1]<<"\n";
    }
    return 0;
}
