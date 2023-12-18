#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,a,b,i,p,f;
    string s;
    cin>>t;
    while(t--)
    {
        p=0;
        f=0;
        cin>>s;
        string x,y;
        x.push_back(s[0]);
        for(i=1;i<s.size();i++)
        {
            if(f==0)
            {
                if(s[i]!='0')
                {
                    f=1;
                    y.push_back(s[i]);
                }
                else
                    x.push_back(s[i]);
            }
            else
                y.push_back(s[i]);
        }
        if(y.size()==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        a=stoi(x);
        b=stoi(y);
        if(a<b)
            cout<<a<<" "<<b<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}