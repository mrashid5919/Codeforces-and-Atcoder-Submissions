#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        if(n%200==0)
            n/=200;
        else
            n=(n*1000)+200;
    }
    cout<<n<<"\n";
    return 0;
}
