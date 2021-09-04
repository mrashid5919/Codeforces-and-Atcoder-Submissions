#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s,t;
    int i;
    cin>>s>>t;
    for(i=0;i<max(s.size(),t.size());i++)
    {
        if(s[i]<t[i])
        {
            cout<<"Yes"<<"\n";
            break;
        }
        else if(t[i]<s[i])
        {
            cout<<"No"<<"\n";
            break;
        }
    }
    return 0;
}
