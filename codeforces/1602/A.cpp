#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,x,mn;
    string s;
    cin>>t;
    while(t--)
    {
        mn=INT_MAX;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]-'a'<mn)
            {
                mn=s[i]-'a';
                x=i;
            }
        }
        cout<<s[x]<<" ";
        for(i=0;i<n;i++)
        {
            if(i==x)
                continue;
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
