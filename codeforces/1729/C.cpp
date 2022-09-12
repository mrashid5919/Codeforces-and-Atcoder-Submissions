#include<bits/stdc++.h>
#include<cmath>
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
        cin>>s;
        cnt=0;
        n=s.size();
        vector<pair<char,long long> > vect;
        for(i=0;i<n;i++)
        {
            vect.push_back(make_pair(s[i],i+1));
        }
        sort(vect.begin(),vect.end());
        vector<long long> ans,tmp;
        if(s[0]>s[n-1])
        {
            for(i=0;i<n;i++)
            {
                if(vect[i].first==s[n-1])
                {
                    if(vect[i].second<n)
                        tmp.push_back(vect[i].second);
                    else
                    {
                        ans.push_back(vect[i].second);
                        for(int j=0;j<tmp.size();j++)
                            ans.push_back(tmp[j]);
                        cnt+=abs((vect[i].first-'a')-(vect[i+1].first-'a'));
                    }
                }
                else if(vect[i].first>s[n-1] && vect[i].first<s[0])
                {
                    cnt+=abs((vect[i].first-'a')-(vect[i+1].first-'a'));
                    ans.push_back(vect[i].second);
                }
                else if(vect[i].first==s[0])
                {
                    if(vect[i].second!=1)
                    {
                        cnt+=abs((vect[i].first-'a')-(vect[i-1].first-'a'));
                        ans.push_back(vect[i].second);
                    }
                }
            }
            ans.push_back(1LL);
            reverse(ans.begin(),ans.end());
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(vect[i].first==s[0] && vect[i].second==1)
                    ans.push_back(vect[i].second);
                else if(vect[i].first>=s[0] && vect[i].first<=s[n-1])
                {
                    cnt+=abs((vect[i].first-'a')-(vect[i-1].first-'a'));
                    ans.push_back(vect[i].second);
                }
            }
        }
        cout<<cnt<<" "<<ans.size()<<"\n";
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
