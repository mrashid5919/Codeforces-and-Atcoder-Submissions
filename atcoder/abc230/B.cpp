#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int n,i,p=0;
    cin>>s;
    n=s.size();
    for(i=1;i<n;i++)
    {
        if(s[i]=='o')
        {
            if(i==1)
            {
                if(s[i-1]!='x')
                {
                    p=1;
                    break;
                }
            }
            else
            {
                if(s[i-1]!='x' || s[i-2]!='x')
                {
                    p=1;
                    break;
                }
            }
        }
        else
        {
            if(i==1)
                continue;
            if((s[i-1]=='o' && s[i-2]=='x') || (s[i-1]=='x' && s[i-2]=='o'))
            {
                continue;
            }
            else
            {
                p=1;
                break;
            }
        }
    }
    if(p==1)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}