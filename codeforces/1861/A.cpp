#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,i,on,th;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0;i<9;i++)
        {
            if(s[i]=='1')
                on=i;
            if(s[i]=='3')
                th=i;
        }
        if(th>on)
            cout<<"13\n";
        else
            cout<<"31\n";
    }
    return 0;
}