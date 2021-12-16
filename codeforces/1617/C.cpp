#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,count,p;
    cin>>t;
    while(t--)
    {
        p=0;
        count=0;
        vector<long long> ex,na;
        map<long long,long long> mp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
            if(ara[i]>n)
                ex.push_back(ara[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(mp[i]==0)
                na.push_back(i);
            if(mp[i]>1)
            {
                for(long long j=0;j<mp[i]-1;j++)
                    ex.push_back(i);
            }
        }
        sort(ex.begin(),ex.end());
        for(i=0;i<na.size();i++)
        {
            if(ex[0]%2==0 && na[i]<=(ex[0]-1)/2)
            {
                count++;
                ex.erase(ex.begin());
            }
            else if(ex[0]%2==1 && na[i]<=ex[0]/2)
            {
                count++;
                ex.erase(ex.begin());
            }
            else
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<count<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
