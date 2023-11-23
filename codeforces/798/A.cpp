#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int i,n,cnt=0;
    cin>>s;
    n=s.size();
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
            cnt++;
    }
    if(cnt==0 && n%2==1)
        cout<<"YES\n";
    else if(cnt==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}