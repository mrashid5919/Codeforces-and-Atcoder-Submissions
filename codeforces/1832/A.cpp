#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,cnt,ara[40];
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>s;
        n=s.size();
        for(i=0;i<26;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            if(n%2==1 && i==n/2)
                continue;
            ara[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(ara[i]>0)
                cnt++;
        }
        if(cnt>1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
