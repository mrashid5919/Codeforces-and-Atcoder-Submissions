#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long parent[100005],cnt[100005],fru[100005],frv[100005],blu[100005],blv[100005],x[100005];

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

int main()
{
    fastio;
    long long n,m,k,i,j;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        make_set(i);
    }
    for(i=0;i<m;i++)
    {
        cin>>fru[i]>>frv[i];
        union_sets(fru[i],frv[i]);
    }
    for(i=0;i<k;i++)
    {
        cin>>blu[i]>>blv[i];
    }
    for(i=1;i<=n;i++)
    {
        cnt[find_set(i)]++;
    }
    for(i=1;i<=n;i++)
    {
        x[i]=cnt[find_set(i)]-1;
    }
    for(i=0;i<m;i++)
    {
        x[fru[i]]--;
        x[frv[i]]--;
    }
    for(i=0;i<k;i++)
    {
        if(find_set(blu[i])==find_set(blv[i]))
        {
            x[blu[i]]--;
            x[blv[i]]--;
        }
    }
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<"\n";
    return 0;
}