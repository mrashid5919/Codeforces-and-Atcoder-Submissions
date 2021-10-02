#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long a=1;
    for(long long i=0;i<y;i++)
        a*=x;
    return a;
}

int main()
{
    fastio;
    long long a,b;
    cin>>a>>b;
    cout<<power(32,a-b)<<"\n";
    return 0;
}
