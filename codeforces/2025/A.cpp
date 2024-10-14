#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main() {
    fastio;
    long long t,n,m,com,i;
    string s,s2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>s2;
        com=0;
        n=s.size(); m=s2.size();
        for(i=0;i<min(n,m);i++)
        {
            if(s[i]==s2[i])
                com++;
            else
                break;
        }
        if(com==0)
            cout<<n+m<<"\n";
        else
            cout<<n+m-com+1<<"\n";
    }
    return 0;
}