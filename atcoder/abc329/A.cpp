#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if(i!=s.size()-1)
            cout<<" ";
    }
    return 0;
}