#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x=1;
    cin>>n;
    if(n%2==0)
    {
        x=2;
        while(n%2==0)
            n/=2;
    }
    for(i=3;i*i<=n;i++)
    {
        if(n==1)
            break;
        if(n%i==0)
        {
            x*=i;
            while(n%i==0)
                n/=i;
        }
    }
    if(n!=1)
        x*=n;
    cout<<x<<"\n";
    return 0;
}
