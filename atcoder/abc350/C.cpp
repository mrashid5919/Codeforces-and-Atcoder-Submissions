#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005],pos[200005];

int main()
{
    fastio;
    int n,i,cnt=0;
    vector<pair<int,int> > vect;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        pos[ara[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]!=i)
        {
            cnt++;
            vect.push_back({i,pos[i]});
            swap(ara[i],ara[pos[i]]);
            pos[ara[pos[i]]]=pos[i];
        }
    }
    cout<<cnt<<"\n";
    for(i=0;i<cnt;i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<"\n";
    }
    return 0;
}