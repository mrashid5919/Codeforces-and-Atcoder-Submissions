#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,cnt,j,p;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>s;
        n=s.size();
        vector<char> vect;
        for(i=0;i<n;i++)
        {
            p=0;
            for(j=0;j<vect.size();j++)
            {
                if(vect[j]==s[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                if(vect.size()<3)
                    vect.push_back(s[i]);
                else
                {
                    cnt++;
                    vect.clear();
                    vect.push_back(s[i]);
                }
            }
        }
        cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
