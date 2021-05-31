#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<1<<"\n";
        return 0;
    }
    if(m>n-m)
        cout<<m-1<<"\n";
    else
        cout<<m+1<<"\n";
    return 0;
}
