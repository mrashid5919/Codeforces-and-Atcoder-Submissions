#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    long long n,count=0;
    cin>>n;
    if(n>=1e15)
        count=(n-1e15+1)*5+(1e15-1e12)*4+(1e12-1e9)*3+(1e9-1e6)*2+(1e6-1000)*1;
    else if(n>=1e12)
        count=(n-1e12+1)*4+(1e12-1e9)*3+(1e9-1e6)*2+(1e6-1000)*1;
    else if(n>=1e9)
        count=(n-1e9+1)*3+(1e9-1e6)*2+(1e6-1000)*1;
    else if(n>=1e6)
        count=(n-1e6+1)*2+(1e6-1000)*1;
    else if(n>=1000)
        count=(n-1000+1);
    else
        count=0;
    cout<<count<<"\n";
    return 0;
}
