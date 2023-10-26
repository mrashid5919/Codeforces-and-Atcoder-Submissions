#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,a,b,i,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>s;
        ans=0;
        n=s.size();
        vector<long long> pos;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                pos.push_back(i);
        }
        if(!pos.empty())
            ans=a;
        for(i=1;i<pos.size();i++)
        {
            if(pos[i]==pos[i-1]+1)
                continue;
            ans+=min(b*(pos[i]-pos[i-1]-1),a);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
