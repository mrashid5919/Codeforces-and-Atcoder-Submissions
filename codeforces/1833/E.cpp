//Looked editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],vis[200005],deg[200005];

int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<set<long long>> g(n);
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            ara[i]--;
            g[i].insert(ara[i]);
            g[ara[i]].insert(i);
        }
        for(i=0;i<n;i++)
            deg[i]=g[i].size();
        long long bamboos=0,cycles=0;
        for(i=0;i<n;i++)
            vis[i]=0;
        for(i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                queue<long long> q;
                q.push(i);
                vis[i]=1;
                vector<long long> component={i};
                while(!q.empty())
                {
                    long long u=q.front();
                    q.pop();
                    for(long long v:g[u])
                    {
                        if(!vis[v])
                        {
                            vis[v]=1;
                            q.push(v);
                            component.push_back(v);
                        }
                    }
                }
                bool bamboo=false;
                for(long long j:component)
                {
                    if(deg[j]==1)
                    {
                        bamboo=true;
                        break;
                    }
                }
                if(bamboo)
                    bamboos++;
                else
                    cycles++;
            }
        }
        cout<<cycles+min(bamboos,1LL)<<" "<<cycles+bamboos<<"\n";
    }
    return 0;
}
