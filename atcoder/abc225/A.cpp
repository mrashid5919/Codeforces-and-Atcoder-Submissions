#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2])
        cout<<1<<"\n";
    else if(s[0]==s[1] || s[1]==s[2] || s[2]==s[0])
        cout<<3<<"\n";
    else
        cout<<6<<"\n";
    return 0;
}