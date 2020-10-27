#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,count,i,ans;
    string s;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        cin>>s;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                count++;
        }
        if(s[0]==s[n-1])
            count++;
        ans=count/2;
        cout<<ans<<"\n";
    }
    return 0;
}
