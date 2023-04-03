#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,pr;
    string s,ans;
    cin>>n;
    cin>>s;
    cout<<s[0];
    pr=0;
    for(i=1;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            if(s[pr]=='a' || s[pr]=='e' || s[pr]=='i' || s[pr]=='o' || s[pr]=='u' || s[pr]=='y')
                continue;
            else
            {
                cout<<s[i];
                pr=i;
            }
        }
        else
        {
            cout<<s[i];
            pr=i;
        }
    }
    return 0;
}
