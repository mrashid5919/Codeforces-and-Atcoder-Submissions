#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    cin>>s;
    if(s[2]=='R')
      cout<<"No\n";
    else if(s[1]=='R' && s[0]=='M')
      cout<<"No\n";
    else
      cout<<"Yes\n";
    return 0;
}