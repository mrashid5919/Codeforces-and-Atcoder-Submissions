#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x,p;
    cin>>t;
    while(t--)
    {
        p=0;
        map<long long,long long> mp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
            if(mp[x]==3 && p==0)
            {
                cout<<x<<"\n";
                p=1;
            }
        }
        if(p==0)
            cout<<-1<<"\n";
    }
    return 0;
}
