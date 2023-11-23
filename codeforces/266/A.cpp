#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int i,cnt=0,n;
    cin>>n;
    cin>>s;
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}