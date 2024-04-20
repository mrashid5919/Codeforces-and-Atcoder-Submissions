#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long parent[200005];

void make_set(long long v) {
    parent[v] = v;
}

long long find_set(long long v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(long long a, long long b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

long long ara[200005],pos[200005],u[200005],v[200005];

int main()
{
    fastio;
    long long n,m,i,j,ans=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        make_set(i);
    }
    for(i=1;i<=m;i++)
    {
        cin>>u[i]>>v[i];
        union_sets(u[i],v[i]);
    }
    for(i=1;i<=n;i++)
    {
        pos[find_set(i)]++;
    }
    for(i=1;i<=n;i++)
    {
        long long x=pos[i];
        pos[i]=(x*(x-1))/2;
    }
    for(i=1;i<=m;i++)
    {
        pos[find_set(u[i])]--;
    }
    for(i=1;i<=n;i++)
    {
        ans+=pos[i];
    }
    cout<<ans<<"\n";
    return 0;
}