#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int parent[1005],parent2[1005];

void make_set(int v) {
    parent[v] = v;
    parent2[v]=v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

int find_set2(int v)
{
    if(v==parent2[v])
        return v;
    return parent2[v]=find_set2(parent2[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

void union_sets2(int a, int b) {
    a = find_set2(a);
    b = find_set2(b);
    if (a != b)
        parent2[b] = a;
}

int main()
{
    fastio;
    int n,m1,m2,i,j,u,v;
    cin>>n>>m1>>m2;
    for(i=1;i<=n;i++)
        make_set(i);
    for(i=0;i<m1;i++)
    {
        cin>>u>>v;
        union_sets(u,v);
    }
    for(i=0;i<m2;i++)
    {
        cin>>u>>v;
        union_sets2(u,v);
    }
    vector<pair<int,int> > vect;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(find_set(i)!=find_set(j) && find_set2(i)!=find_set2(j))
            {
                vect.push_back({i,j});
                union_sets(i,j);
                union_sets2(i,j);
            }
        }
    }
    cout<<vect.size()<<"\n";
    for(i=0;i<vect.size();i++)
        cout<<vect[i].first<<" "<<vect[i].second<<"\n";
    return 0;
}