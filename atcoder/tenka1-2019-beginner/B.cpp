#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int n,k,i;
    cin>>n;
    cin>>s;
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[k-1])
            cout<<"*";
        else
            cout<<s[i];
    }
}