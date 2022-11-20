#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if(a==n && b==n)
            cout<<"YES"<<"\n";
        else if(b>=n-a-1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
