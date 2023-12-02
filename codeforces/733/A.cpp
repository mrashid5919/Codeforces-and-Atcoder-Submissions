#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,prv=0,mx=0;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            mx=max(mx,i+1-prv);
            prv=i+1;
        }
    }
    mx=max(mx,n+1-prv);
    cout<<mx<<"\n";
    return 0;
}