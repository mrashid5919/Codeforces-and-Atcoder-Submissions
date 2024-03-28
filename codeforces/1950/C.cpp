#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        x=(s[0]-'0')*10+(s[1]-'0');
        if(x<12)
        {
            if(x==0)
                cout<<12<<":"<<s[3]<<s[4]<<" AM\n";
            else if(x<10)
                cout<<"0"<<x<<":"<<s[3]<<s[4]<<" AM\n";
            else
                cout<<x<<":"<<s[3]<<s[4]<<" AM\n";
        }
        else if(x==12)
            cout<<x<<":"<<s[3]<<s[4]<<" PM\n";
        else if(x-12<10)
            cout<<"0"<<x-12<<":"<<s[3]<<s[4]<<" PM\n";
        else
            cout<<x-12<<":"<<s[3]<<s[4]<<" PM\n";
    }
    return 0;
}