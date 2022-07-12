#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=0;
        if((s[0]=='Y' || s[0]=='y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S')  )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
