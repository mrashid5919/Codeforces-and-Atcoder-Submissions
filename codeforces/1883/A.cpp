#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,i,ans;
    string s;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>s;
        if(s[0]=='0')
            ans+=10;
        else
            ans+=(s[0]-'0');
        for(i=1;i<4;i++)
        {
            if(s[i]=='0' && s[i-1]=='0')
                ans++;
            else if(s[i]=='0')
                ans+=11-(s[i-1]-'0');
            else if(s[i-1]=='0')
                ans+=10-(s[i]-'0')+1;
            else
                ans+=max(s[i]-'0',s[i-1]-'0')-min(s[i]-'0',s[i-1]-'0')+1;
        }
        cout<<ans<<"\n";  
    }
}