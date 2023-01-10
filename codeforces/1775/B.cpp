#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long k[100005],pos[200006];

int main()
{
    fastio;
    long long t,n,i,p,x;
    cin>>t;
    while(t--)
    {
        map<long long,long long> mp;
        /*for(i=0;i<=200000;i++)
            pos[i]=0;*/
        cin>>n;
        vector<long long> vect[n+5];
        for(i=0;i<n;i++)
        {
            cin>>k[i];
            for(long long j=0;j<k[i];j++)
            {
                cin>>x;
                vect[i].push_back(x);
                if(mp[x]==0)
                {
                    mp[x]=1;
                    pos[x]=1;
                }
                else
                    pos[x]++;
            }
        }
        for(i=0;i<n;i++)
        {
            p=0;
            for(long long j=0;j<k[i];j++)
            {
                if(pos[vect[i][j]]==1)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                break;
        }
        if(p==0)
            cout<<"YES\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
