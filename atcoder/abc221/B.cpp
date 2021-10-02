#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s,t;
    cin>>s;
    cin>>t;
    int p=0,x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            p=1;
            break;
        }
    }
    if(p==1)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
                x++;
        }
        if(x==2)
        {
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]==t[i+1] && t[i]==s[i+1])
                {
                    p=0;
                    break;
                }
            }
        }
    }
    if(p==0)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
