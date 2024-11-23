#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>s;
        n=s.size();
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                cout<<s[i]<<s[i-1]<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
        {
            for(i=2;i<n;i++)
            {
                if(s[i]!=s[i-1] && s[i]!=s[i-2] && s[i-1]!=s[i-2])
                {
                    cout<<s[i-2]<<s[i-1]<<s[i]<<"\n";
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
        {
            cout<<"-1\n";
        }
    }
    return 0;
}