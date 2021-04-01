#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int n,i,p=0;
    cin>>s;
    n=s.size();
    for(i=0;i<n-2;i++)
    {
        if(((s[i]-'A')+(s[i+1]-'A'))%26!=(s[i+2]-'A'))
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
