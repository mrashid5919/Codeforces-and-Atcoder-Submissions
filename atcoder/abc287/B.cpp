#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,m,i,cnt=0;
    string ara[2000],b;
    map<string,int> mp;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<m;i++)
    {
        cin>>b;
        mp[b]++;
    }
    for(i=0;i<n;i++)
    {
        string x;
        for(int j=3;j<6;j++)
            x.push_back(ara[i][j]);
        if(mp[x])
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
