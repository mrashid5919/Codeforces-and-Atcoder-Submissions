#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int a,b;
    char temp;
    cin>>s;
    cin>>a>>b;
    temp=s[a-1];
    s[a-1]=s[b-1];
    s[b-1]=temp;
    cout<<s<<"\n";
    return 0;
}
