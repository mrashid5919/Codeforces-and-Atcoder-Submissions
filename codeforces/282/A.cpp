#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,i,c=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
            c++;
        else
            c--;
    }
    cout<<c<<"\n";
    return 0;
}