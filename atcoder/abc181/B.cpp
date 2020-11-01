#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,a,b,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        sum+=(b*(b+1))/2-(a*(a-1))/2;
    }
    cout<<sum;
    return 0;
}
