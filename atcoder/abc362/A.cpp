#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int r,g,b;
    string s;
    cin>>r>>g>>b;
    cin>>s;
    if(s=="Red")
        cout<<min(g,b)<<"\n";
    else if(s=="Green")
        cout<<min(r,b)<<"\n";
    else
        cout<<min(r,g)<<"\n";
    return 0;
}