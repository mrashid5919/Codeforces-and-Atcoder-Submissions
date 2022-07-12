#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,cnt;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cnt=0;
        map<char,int> mp;
        for(i=0;i<n;i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]=1;
                cnt+=2;
            }
            else
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
