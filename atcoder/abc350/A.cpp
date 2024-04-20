#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int n=0;
    cin>>s;
    for(int i=3;i<=5;i++)
    {
        n=n*10+(s[i]-'0');
    }
    //cout<<n<<"\n";
    if(n>349 || n==316 || n==0)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}