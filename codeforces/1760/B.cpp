#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,mx;
    string s;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
            mx=max(mx,s[i]-'a'+1);
        cout<<mx<<"\n";
    }
    return 0;
}
