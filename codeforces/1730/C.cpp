#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,i,n,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        vector<pair<char,int> > vect;
        for(i=0;i<n;i++)
        {
            vect.push_back(make_pair(s[i],i));
        }
        sort(vect.begin(),vect.end());
        x=0;
        string ans,temp;
        for(i=0;i<n;i++)
        {
            if(vect[i].second>x)
            {
                while(vect[i].second!=x)
                {
                    if(s[x]=='9')
                        temp.push_back(s[x]);
                    else
                        temp.push_back((char)(s[x]+1));
                    x++;
                }
                if(vect[i].first=='9')
                    temp.push_back(vect[i].first);
                else
                    ans.push_back(vect[i].first);
                x++;
            }
            else if(vect[i].second==x)
            {
                if(vect[i].first=='9')
                    temp.push_back(vect[i].first);
                else
                    ans.push_back(vect[i].first);
                x++;
            }
        }
        sort(temp.begin(),temp.end());
        ans.append(temp);
        sort(ans.begin(),ans.end());
        cout<<ans<<"\n";
    }
    return 0;
}
