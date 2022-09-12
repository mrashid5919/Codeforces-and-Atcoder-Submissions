#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        string ans;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                int temp=0;
                temp+=(s[i-2]-'0');
                temp=(temp*10)+(s[i-1]-'0');
                ans.push_back('a'+temp-1);
                i-=2;
                continue;
            }
            ans.push_back('a'+(s[i]-'0')-1);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";
    }
    return 0;
}
