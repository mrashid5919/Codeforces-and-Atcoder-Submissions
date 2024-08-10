#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,t,a;
    cin>>n>>t>>a;
    if(t>=n/2+n%2 || a>=n/2+n%2)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}