#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int n,i;
    cin>>s;
    n=s.size();
    int pr[n+5]={0};
    if(s[n-1]=='0')
        pr[n-1]=1;
    if(pr[n-1]==1 && s[n-2]=='0')
        pr[n-2]=1;
    if(pr[n-2]==1 && s[n-3]=='0')
        pr[n-3]=1;
    if(pr[n-1]==1 && pr[n-2]==1 && pr[n-3]==1)
    {
        pr[n-4]=1;
    }
    for(i=0;i<n;i++)
    {
        if(pr[i]==0)
            cout<<s[i];
    }
    return 0;
}