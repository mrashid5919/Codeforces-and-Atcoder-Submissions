#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long p[100005],ara[100005];

int main()
{
    fastio;
    long long t,n,m,d,i,mn;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        map<long long,long long> pos;
        cin>>n>>m>>d;
        for(i=0;i<n;i++)
        {
            cin>>p[i];
            pos[p[i]]=i;
        }
        for(i=0;i<m;i++)
            cin>>ara[i];
        for(i=0;i<m-1;i++)
        {
            //cout<<pos[ara[i]]+n-1-pos[ara[i+1]]<<" "<<d+1-(pos[ara[i+1]]-pos[ara[i]])<<"\n";
            if(pos[ara[i]]<pos[ara[i+1]] && pos[ara[i+1]]<=pos[ara[i]]+d)
            {
                if(pos[ara[i]]+n-1-pos[ara[i+1]]>=d+1-(pos[ara[i+1]]-pos[ara[i]])){
                    mn=min(mn,d+1-(pos[ara[i+1]]-pos[ara[i]]));
                }
                mn=min(mn,pos[ara[i+1]]-pos[ara[i]]);
            }
            else
            {
                mn=0;
                break;
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
