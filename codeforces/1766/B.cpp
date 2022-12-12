#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        cin>>s;
        map<string,int> mp;
        if(n<=3)
        {
            cout<<"NO\n";
            continue;
        }
        string x;
        x.push_back(s[0]);
        x.push_back(s[1]);
        mp[x]++;
        x.clear();
        x.push_back(s[1]);
        x.push_back(s[2]);
        mp[x]++;
        for(i=2;i<n-1;i++)
        {
            string y;
            y.push_back(s[i]);
            y.push_back(s[i+1]);
            if(mp[y]>0)
            {
                if(s[i]==s[i-1] && s[i+1]==s[i] && mp[y]==1){
                    mp[y]++;
                    continue;
                }
                //cout<<y<<"\n";
                p=1;
                break;
            }
            else
                mp[y]++;
        }
        if(p==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
