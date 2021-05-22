#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int n,i;
    cin>>s;
    reverse(s.begin(), s.end());
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='6')
            s[i]='9';
        else if(s[i]=='9')
            s[i]='6';
    }
    cout<<s;
    return 0;
}