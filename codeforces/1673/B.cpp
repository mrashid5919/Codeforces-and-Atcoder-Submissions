#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,p,co;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        p=0;
        co=0;
        n=s.size();
        map<char,long long> mp;
        for(i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]++;
                co++;
            }
        }
        mp.clear();
        for(i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
                mp[s[i]]=i+1;
            else if(i+1-mp[s[i]]>=co)
                mp[s[i]]=i+1;
            else
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
