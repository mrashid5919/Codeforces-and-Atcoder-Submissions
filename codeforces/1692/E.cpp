#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200005];

int main()
{
    fastio;
    int t,n,s,i,on,l,r,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        mn=300000;
        vector<int> pos;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
                pos.push_back(i);
        }
        if(pos.size()<s)
        {
            cout<<-1<<"\n";
            continue;
        }
        on=pos.size();
        for(i=0;i<=on-s;i++)
        {
            if(i==0)
            {
                l=0;
            }
            else
                l=pos[i-1]+1;
            if(i+s-1==on-1)
                r=n-1;
            else
                r=pos[i+s]-1;
            mn=min(mn,l+n-1-r);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
