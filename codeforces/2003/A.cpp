#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(s[0]!=s[n-1])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}