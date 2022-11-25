#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
    return 0;
}
