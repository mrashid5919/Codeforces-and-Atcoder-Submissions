#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,sum=0,mul=0;
    long long M=1000000007;
    static long long ara[200003];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=n-2;i>=0;i--)
    {
        sum=((sum%M)+(ara[i+1]%M))%M;
        mul=((mul%M)+((ara[i]%M)*(sum%M))%M)%M;
    }
    cout<<mul<<"\n";
    return 0;
}