#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,m,i,ara[10],ans;
    string s;
    cin>>t;
    while(t--)
    {
        ans=0;
        for(i=0;i<10;i++)
            ara[i]=0;
        cin>>n>>m;
        cin>>s;
        for(i=0;i<n;i++)
            ara[s[i]-'A']++;
        for(i=0;i<7;i++)
        {
            if(ara[i]<m)
                ans+=m-ara[i];
        }
        cout<<ans<<"\n";
    }
}