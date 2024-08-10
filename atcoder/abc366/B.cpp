#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,j,mx,m;
    vector<string> ara(100);
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        m=s.size();
        if(i==0)
            mx=m;
        else
            mx=max(mx,m);
        for(j=0;j<mx;j++)
        {
            if(j<m)
                ara[j].push_back(s[j]);
            else
                ara[j].push_back('*');
        }
    }
    for(i=0;i<mx;i++)
    {
        reverse(ara[i].begin(),ara[i].end());
        cout<<ara[i]<<"\n";
    }
    return 0;
}