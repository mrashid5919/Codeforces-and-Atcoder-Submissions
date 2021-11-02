#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ans;
    string s,k;
    cin>>t;
    while(t--)
    {
        ans=0;
        map<char,int> mp;
        cin>>k;
        for(i=0;i<26;i++)
            mp[k[i]]=i;
        cin>>s;
        n=s.size();
        for(i=1;i<n;i++)
        {
            ans=ans+abs(mp[s[i]]-mp[s[i-1]]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
