#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string st;
    cin>>st;
    if(st[0]==st[1] && st[1]==st[2])
        cout<<"Won"<<"\n";
    else
        cout<<"Lost"<<"\n";
    return 0;
}
