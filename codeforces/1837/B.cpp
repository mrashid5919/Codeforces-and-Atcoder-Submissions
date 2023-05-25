#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,cur,mn,mx;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cur=1;
        mx=1;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                cur++;
                mx=max(mx,cur);
            }
            else
            {
                cur=1;
            }
        }
        cout<<mx+1<<"\n";
    }
    return 0;
}
