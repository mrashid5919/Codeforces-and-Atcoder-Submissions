#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int x,y,n;
    cin>>x>>y>>n;
    if(y>3*x)
        cout<<n*x<<"\n";
    else
        cout<<(n/3)*y+(n%3)*x<<"\n";
    return 0;
}