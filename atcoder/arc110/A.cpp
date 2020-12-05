#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    long long n,ans=1,i;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        ans=(ans*i)/gcd(ans,i);
    }
    cout<<ans+1<<"\n";
    return 0;
}
