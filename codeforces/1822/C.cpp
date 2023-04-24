#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==4)
            cout<<26<<"\n";
        else
        {
            x=(n*(n+1))/2-15;
            cout<<n+32+2*x<<"\n";
        }
    }
    return 0;
}
