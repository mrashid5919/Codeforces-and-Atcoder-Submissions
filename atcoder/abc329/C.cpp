#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,ara[35],cur,ans=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<26;i++)
        ara[i]=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cur=1;
            ara[s[i]-'a']=1;
        }
        else if(s[i]==s[i-1])
        {
            cur++;
            ara[s[i]-'a']=max(cur,ara[s[i]-'a']);
        }
        else
        {
            cur=1;
            ara[s[i]-'a']=max(cur,ara[s[i]-'a']);
        }
    }
    for(i=0;i<26;i++)
        ans+=ara[i];
    cout<<ans<<"\n";
    return 0;
}