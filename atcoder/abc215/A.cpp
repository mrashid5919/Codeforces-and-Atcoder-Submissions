#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int p=0;
    string s,t;
    cin>>s;
    t="Hello,World!";
    if(s.size()==t.size())
    {
        for(int i=0;i<t.size();i++)
        {
            if(s[i]!=t[i])
            {
                cout<<"WA"<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"AC"<<"\n";
    }
    else
        cout<<"WA"<<"\n";
    return 0;
}
