#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[100],vis[100],p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cin>>s;
        for(i=0;i<100;i++)
            vis[i]=-1;
        map<int,char> mp;
        for(i=0;i<n;i++)
        {
            if(vis[ara[i]]==-1)
            {
                vis[ara[i]]=0;
                mp[ara[i]]=s[i];
            }
            else if(s[i]!=mp[ara[i]])
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
