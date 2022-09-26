#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,n,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        vector<char> odd,even;
        map<char,int> mp;
        for(i=0;i<n;i++)
        {
            if((s[i]-'a')%2==0)
            {
                if(mp[s[i]]==0)
                    odd.push_back(s[i]);
                mp[s[i]]++;
            }
            else
            {
                if(mp[s[i]]==0)
                    even.push_back(s[i]);
                mp[s[i]]++;
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        if(even.size()==0)
        {
            for(i=0;i<odd.size();i++)
            {
                for(j=0;j<mp[odd[i]];j++)
                    cout<<odd[i];
            }
            cout<<"\n";
        }
        else if(odd.size()==0)
        {
            for(i=0;i<even.size();i++)
            {
                for(j=0;j<mp[even[i]];j++)
                    cout<<even[i];
            }
            cout<<"\n";
        }
        else if(abs(odd[odd.size()-1]-even[0])==1)
        {
            if(abs(even[even.size()-1]-odd[0])==1)
            {
                cout<<"No answer\n";
                continue;
            }
            else
            {
                for(i=0; i<even.size(); i++)
                {
                    for(j=0; j<mp[even[i]]; j++)
                        cout<<even[i];
                }
                for(i=0; i<odd.size(); i++)
                {
                    for(j=0; j<mp[odd[i]]; j++)
                        cout<<odd[i];
                }
                cout<<"\n";
            }
        }
        else
        {
            for(i=0;i<odd.size();i++)
            {
                for(j=0;j<mp[odd[i]];j++)
                    cout<<odd[i];
            }
            for(i=0;i<even.size();i++)
            {
                for(j=0;j<mp[even[i]];j++)
                    cout<<even[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
