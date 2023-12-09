#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int a,b;
    cin>>a>>b;
    if(max(a,b)-min(a,b)==__gcd(a,b))
        cout<<"Equal\n";
    else if(a>b)
        cout<<"Masha\n";
    else
        cout<<"Dasha\n";
    return 0;
}