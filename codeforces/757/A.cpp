#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s,b="ulbasaur";
    int n,i,mn;
    cin>>s;
    map<char,int> mp;
    n=s.size();
    for(i=0;i<n;i++)
        mp[s[i]]++;
    mn=mp['B'];
    for(i=0;i<b.size();i++)
    {
        if(b[i]=='u' || b[i]=='a')
            mn=min(mn,mp[b[i]]/2);
        else
            mn=min(mn,mp[b[i]]);
    }
    cout<<mn<<"\n";
    return 0;
}