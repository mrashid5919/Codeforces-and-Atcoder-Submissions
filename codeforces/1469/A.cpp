#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        if(n%2==1)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(s[0]==')' || s[n-1]=='(')
        {
            cout<<"NO"<<"\n";
            continue;
        }
        cout<<"YES"<<"\n";
    }
    return 0;
}
