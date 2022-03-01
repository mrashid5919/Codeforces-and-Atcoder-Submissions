#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==',')
            cout<<" ";
        else
            cout<<s[i];
    }
    return 0;
}
