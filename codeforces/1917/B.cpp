#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,ara[40],dis,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        dis=0;
        for(i=0;i<26;i++)
            ara[i]=0;
        ans=(n*(n+1))/2;
        for(i=0;i<n;i++)
        {
            ara[s[i]-'a']++;
            if(ara[s[i]-'a']==1)
                dis++;
            else
                ans-=(n-i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}