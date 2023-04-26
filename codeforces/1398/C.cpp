//Looked editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,i,n,x,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        cin>>s;
        x=0;
        map<long long,long long> mp;
        mp[0]=1;
        for(i=0;i<n;i++)
        {
            x+=(s[i]-'0');
            mp[x-i-1]++;
            ans+=mp[x-i-1]-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
