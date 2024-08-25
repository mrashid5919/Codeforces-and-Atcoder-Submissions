#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,dist;
    string s;
    cin>>t;
    while(t--)
    {
        dist=0;
        for(i=0;i<26;i++)
            ara[i]=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            ara[s[i]-'a']++;
            if(ara[s[i]-'a']==1)
                dist++;
        }
        while(dist!=0)
        {
            for(i=0;i<26;i++)
            {
                if(ara[i]!=0)
                {
                    cout<<(char)('a'+i);
                    ara[i]--;
                    if(ara[i]==0)
                        dist--;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}