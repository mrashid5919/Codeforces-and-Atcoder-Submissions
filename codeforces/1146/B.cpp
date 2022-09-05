#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
    string s,t,x;
    int p=0;
    cin>>s;
    t=s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a')
            x.push_back(s[i]);
        t.erase(0,1);
        if(x.size()==t.size())
        {
            if(x==t)
            {
                p=1;
                cout<<s.substr(0,i+1)<<"\n";
                break;
            }
        }
    }
    if(p==0)
        cout<<":("<<"\n";
    return 0;
}
