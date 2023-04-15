#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,o,ans;
    string s;
    cin>>t;
    while(t--)
    {
        o=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                o++;
        }
        if(o==0)
        {
            cout<<0<<"\n";
            continue;
        }
        if(o==n)
        {
            ans=n*n;
            cout<<ans<<"\n";
            continue;
        }
        long long pr=0;
        long long ps=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                pr++;
            else
                break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
                ps++;
            else
                break;
        }
        long long mx=0;
        long long curr=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                curr++;
            }
            if(s[i]=='0' || i==n-1)
            {
                mx=max(mx,curr);
                curr=0;
            }
        }
        mx=max(mx,pr+ps);
        if(mx==1)
            cout<<1<<"\n";
        else
        {
            ans=(mx-(mx/2+mx%2)+1)*(mx/2+mx%2);
            cout<<ans<<"\n";
        }
            //cout<<(mx-(mx/2+mx%2)+1)*(mx/2+mx%2)<<"\n";
    }
    return 0;
}
