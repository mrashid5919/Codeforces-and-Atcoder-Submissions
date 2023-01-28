#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[300005];

int main()
{
    fastio;
    string s,t;
    int n,m,i,dif=0;
    cin>>s;
    cin>>t;
    n=s.size();
    m=t.size();
    string d;
    for(i=0;i<m;i++)
        d.push_back(s[n-1-i]);
    reverse(d.begin(),d.end());
    for(i=0;i<m;i++)
    {
        if(d[i]=='?' || t[i]=='?'){
            ara[i]=0;
        }
        else if(d[i]!=t[i]){
            ara[i]=1;
            dif++;
        }
    }
    if(dif==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    for(i=0;i<m;i++)
    {
        if(s[i]=='?' || t[i]=='?'){
            if(ara[i]==1)
            {
                dif--;
                ara[i]=0;
            }
        }
        else
        {
            if(ara[i]==0 && t[i]!=s[i])
                dif++;
            else if(ara[i]==1 && t[i]==s[i])
                dif--;
        }
        if(dif>0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
