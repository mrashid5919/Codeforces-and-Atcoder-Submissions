#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    if(n==24)
    {
        if(s[1]>'3' && s[0]>='2')
            s[0]='0';
        if(s[0]>'2')
            s[0]='0';
        if(s[3]>'5')
            s[3]='0';
    }
    else
    {
        if(s[1]>'2' && s[0]>'0')
            s[0]='0';
        if(s[0]>'1')
            s[0]='0';
        if(s[1]=='0')
            s[0]='1';
        if(s[3]>'5')
            s[3]='0';
    }
    cout<<s<<"\n";
    return 0;
}
