#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n;
    cin>>n;
    if(n>1 && n<=4)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}