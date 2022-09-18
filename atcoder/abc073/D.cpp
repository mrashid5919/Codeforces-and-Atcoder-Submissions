#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

const long long INF=10000000000;

void floyd_warshall(long long n,long long adj[][210],long long pr[][210])
{
    for(long long k=1;k<=n;k++)
    {
        for(long long i=1;i<=n;i++)
        {
            for(long long j=1;j<=n;j++)
            {
                if (adj[i][k]<INF && adj[k][j]<INF && adj[i][k]+adj[k][j]<adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                    //pr[i][j]=pr[k][j];
                }
            }
        }
    }
}

int main()
{
    long long n,m,r,i,j,u,v,w,adj[210][210],pr[210][210],ro[20],mn=INF;
    cin>>n>>m>>r;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                adj[i][j]=0;
            else
                adj[i][j]=INF;
            pr[i][j]=0;
        }
    }
    for(i=0;i<r;i++)
        cin>>ro[i];
    sort(ro,ro+r);
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj[v][u]=w;
        //pr[u][v]=u;
        //pr[v][u]=v;
    }
    floyd_warshall(n,adj,pr);
    do {
        long long c=0;
        for(i=1;i<r;i++)
        {
            if(adj[ro[i-1]][ro[i]]==INF)
            {
                c=0;
                break;
            }
            else
                c+=adj[ro[i-1]][ro[i]];
        }
        if(c>0)
            mn=min(mn,c);
    } while (next_permutation(ro, ro + r));
    cout<<mn<<"\n";
    return 0;
}

