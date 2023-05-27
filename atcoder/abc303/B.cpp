#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,m,i,j,ara[100][100];
    set<long long> vect[55];
    cin>>n>>m;
    swap(n,m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j>0)
                vect[ara[i][j]].insert(ara[i][j-1]);
            if(j<m-1)
                vect[ara[i][j]].insert(ara[i][j+1]);
        }
    }
    long long cnt=0;
    for(i=1;i<=m;i++)
        cnt+=(m-1-vect[i].size());
    cout<<cnt/2<<"\n";
    return 0;
}
