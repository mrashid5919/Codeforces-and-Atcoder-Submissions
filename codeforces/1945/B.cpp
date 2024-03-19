#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        cout<<(m/a)+(m/b)+2<<"\n";
    }
    return 0;
}