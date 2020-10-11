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
    fastio;
    long long n,i,s;
    static long long ara[100003];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i==0)
            s=ara[i];
        else
            s=gcd(s,ara[i]);
    }
    cout<<s<<"\n";
    return 0;
}
