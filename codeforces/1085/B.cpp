#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && n/i<k)
        {
            cout<<i*k+n/i<<"\n";
            break;
        }
    }
    return 0;
}