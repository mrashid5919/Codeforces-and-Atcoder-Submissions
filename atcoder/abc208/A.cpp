#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int a,b;
    cin>>a>>b;
    if(b>=a && b<=6*a)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
