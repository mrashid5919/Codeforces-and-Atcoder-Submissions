#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>b || a>d)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}
