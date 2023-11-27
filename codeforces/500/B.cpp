//Seen editorial
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int parent[400];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

int main()
{
    fastio;
    int n,i,j,p[400],ans[400];
    char ara[400][400];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>p[i];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>ara[i][j];
    }
    for(i=1;i<=n;i++)
        make_set(i);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ara[i][j]=='1')
                union_sets(i,j);
        }
    }
    // for(i=1;i<=n;i++)
    //     cout<<parent[i]<<"\n";
    vector<int> pos[305],val[305];
    for(i=1;i<=n;i++)
    {
        pos[find_set(i)].push_back(i);
        val[find_set(i)].push_back(p[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(!(pos[i].empty()))
        {
            sort(pos[i].begin(),pos[i].end());
            sort(val[i].begin(),val[i].end());
            for(j=0;j<pos[i].size();j++)
            {
                ans[pos[i][j]]=val[i][j];
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}