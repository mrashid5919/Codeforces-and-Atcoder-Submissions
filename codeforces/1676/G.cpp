#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<long long>adj[5000];
long long chi[5000],b[5000],w[5000],co;
string s;

void postorder(long long u)
{
    if(chi[u]==0)
    {
        if(s[u]=='B')
            b[u]++;
        else
            w[u]++;
        return;
    }
    for(long long i=0;i<adj[u].size();i++)
    {
        postorder(adj[u][i]);
        b[u]+=b[adj[u][i]];
        w[u]+=w[adj[u][i]];
    }
    if(s[u]=='B')
        b[u]++;
    else
        w[u]++;
    if(b[u]==w[u])
        co++;
}

int main()
{
    fastio;
    long long t,n,i,ara[5000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        co=0;
        for(i=0;i<n;i++)
        {
            //vis[i]=0;
            chi[i]=0;
            b[i]=0;
            w[i]=0;
        }
        for(i=1;i<n;i++)
        {
            cin>>ara[i];
            ara[i]--;
            chi[ara[i]]=1;
            adj[ara[i]].push_back(i);
        }
        cin>>s;
        postorder(0);
        cout<<co<<"\n";
        s.clear();
        for(i=0;i<n;i++)
        {
            adj[i].clear();
        }
    }
    return 0;
}
