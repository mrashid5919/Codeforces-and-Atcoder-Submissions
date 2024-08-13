#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],vis[35];

int main()
{
    fastio;
    long long t,n,m,i,j,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cin>>m;
        while(m--)
        {
            map<char,long long> mp;
            map<long long,long long> mp2;
            for(i=0;i<26;i++)
                vis[i]=0;
            p=0;            
            cin>>s;
            if(s.size()!=n)
            {
                cout<<"NO\n";
                continue;
            }
            for(i=0;i<n;i++)
            {
                if(vis[s[i]-'a']==0)
                {
                    if(mp2[ara[i]]==0)
                    {
                        vis[s[i]-'a']=1;
                        mp[s[i]]=ara[i];
                        mp2[ara[i]]=1;
                    }
                    else
                    {
                        p=1;
                        break;
                    }
                }
                else
                {
                    if(mp[s[i]]!=ara[i])
                    {
                        p=1;
                        break;
                    }
                }
            }
            if(p==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}