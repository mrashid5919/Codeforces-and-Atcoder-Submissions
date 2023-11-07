#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cout<<s[n-1]<<"\n";
    }
    return 0;
}