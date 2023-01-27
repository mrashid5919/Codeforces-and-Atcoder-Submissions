#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,s,r,i,ara[100];
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        ara[0]=s-r;
        for(i=1;i<n;i++)
            ara[i]=r/(n-1);
        for(i=1;i<=(r%(n-1));i++)
            ara[i]++;
        for(i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
