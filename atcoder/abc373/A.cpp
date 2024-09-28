#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int i,cnt=0;
    string s;
    for(i=1;i<=12;i++)
    {
        cin>>s;
        if(s.size()==i)
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}