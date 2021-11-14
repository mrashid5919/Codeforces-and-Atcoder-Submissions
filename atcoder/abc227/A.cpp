#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,k,a,x;
    cin>>n>>k>>a;
    x=(a-1+k)%n;
    if(x==0)
        cout<<n;
    else
        cout<<x;
    return 0;
}
