#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int t,n,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        ans=0;
        for(i=1;i<n;i++)
            ans+=9;
        ans+=(s[0]-'0');
        cout<<ans<<"\n";
    }
    return 0;
}
