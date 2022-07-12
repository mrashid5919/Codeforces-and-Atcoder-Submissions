#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

string ara[100005];

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        for(i=0;i<n;i++)
        {
            int p=0;
            for(int j=1;j<ara[i].size();j++)
            {
                string s1,s2;
                s1=ara[i].substr(0,j);
                s2=ara[i].substr(j,ara[i].size());
                if(mp[s1] && mp[s2])
                {
                    p=1;
                    break;
                }
            }
            cout<<p;
        }
        cout<<"\n";
    }
}
