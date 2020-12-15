#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1 && n<=9)
            ans=n;
        else if(n>=10 && n<=17)
            ans=(n-9)*10+9;
        else if(n>=18 && n<=24)
            ans=(n-17)*100+89;
        else if(n>=25 && n<=30)
            ans=(n-24)*1000+789;
        else if(n>=31 && n<=35)
            ans=(n-30)*10000+6789;
        else if(n>=36 && n<=39)
            ans=(n-35)*100000+56789;
        else if(n>=40 && n<=42)
            ans=(n-39)*1000000+456789;
        else if(n==43 || n==44)
            ans=(n-42)*10000000+3456789;
        else if(n==45)
            ans=123456789;
        else
            ans=-1;
        cout<<ans<<"\n";
    }
    return 0;
}
