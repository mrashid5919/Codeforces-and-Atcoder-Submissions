#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%m==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
