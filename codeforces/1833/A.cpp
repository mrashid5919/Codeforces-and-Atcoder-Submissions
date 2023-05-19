#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,cnt;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        cin>>s;
        map<string,long long> mp;
        for(i=0;i<s.size()-1;i++)
        {
            string tmp;
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            mp[tmp]++;
            if(mp[tmp]==1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
