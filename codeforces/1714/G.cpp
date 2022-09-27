#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long pr[200005],ch[200005],a[200005],b[200005],h[200005],mx[200005];
vector<long long> adj[200005];

void BFS(long long src) {
    queue<long long> que;

    // enqueue element src
    que.push(src);

    // do until queue is empty
    while (!que.empty()) {

        // get the first element of queue
        long long f = que.front();

        // dequeue element
        que.pop();

        for (long long i = 0; i < adj[f].size(); i++) {
            long long x = adj[f][i];

            que.push(x);
            h[x] = h[f] + 1;
            a[x]=a[f]+a[x];
            b[x]=b[f]+b[x];
        }
    }

}

void dfs(long long src)
{
    if(ch[src]==-1)
    {
        if(b[src]<=a[src])
        {
            mx[src]=src;
        }
        else
        {
            long long p=pr[src];
            while(p!=-1)
            {
                if(b[p]<=a[src])
                {
                    mx[src]=p;
                    break;
                }
                p=pr[p];
            }
        }
        return;
    }
    for(long long i=0;i<adj[src].size();i++)
    {
        long long x=adj[src][i];
        dfs(x);
        if(mx[src]==-1)
        {
            long long p;
            //cout<<x<<" "<<mx[x]<<"\n";
            if(h[src]<h[mx[x]])
                p=src;
            else
                p=mx[x];
            while(p!=-1)
            {
                if(b[p]<=a[src])
                {
                    mx[src]=p;
                    break;
                }
                p=pr[p];
            }
        }
    }
}

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            pr[i]=-1;
            ch[i]=-1;
            mx[i]=-1;
        }
        a[0]=0;
        b[0]=0;
        h[0]=0;
        mx[0]=0;
        for(i=1;i<n;i++)
        {
            cin>>pr[i]>>a[i]>>b[i];
            pr[i]--;
            ch[pr[i]]=1;
            adj[pr[i]].push_back(i);
        }
        BFS(0);
        dfs(0);
        for(i=1;i<n;i++)
            cout<<h[mx[i]]<<" ";
        cout<<"\n";
        for(i=0;i<n;i++)
            adj[i].clear();
    }
    return 0;
}
