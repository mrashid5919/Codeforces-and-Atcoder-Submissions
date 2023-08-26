#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,m,i,j,wt[15]={0},lz[15]={0},mn=0,x;
    string ara[1005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        lz[ara[i][0]-'a']=1;
        m=ara[i].size();
        x=1;
        for(j=m-1;j>=0;j--)
        {
            wt[ara[i][j]-'a']+=x;
            x*=10;
        }
    }
    vector<pair<int,int> > vect;
    for(i=0;i<10;i++)
        vect.push_back({wt[i],i});
    sort(vect.begin(),vect.end(),greater<pair<int,int> >());
    x=-1;
    for(i=0;i<10;i++)
    {
        if(lz[vect[i].second]==0)
        {
            x=i;
            break;
        }
    }
    m=1;
    for(i=0;i<10;i++)
    {
        if(x==i)
            continue;
        mn+=m*vect[i].first;
        m++;
    }
    cout<<mn<<"\n";
    return 0;
}